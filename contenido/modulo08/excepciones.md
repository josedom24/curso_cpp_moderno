# Introducción a las excepciones


En C++, como en cualquier lenguaje de programación, los errores pueden aparecer en dos momentos muy distintos: 

* **Errores de compilación**: Son errores que el compilador detecta cuando intenta traducir nuestro código a lenguaje máquina. Aparecen por razones como:

    * Errores de sintaxis.
    * Tipos incompatibles.
    * Variables no declaradas.
    * Llamadas incorrectas a funciones.

    Estos errores impiden que el programa se compile, y por tanto, nunca llega a ejecutarse:

    ```cpp
    int main() {
        int x = "texto"; // ❌ Error de tipo: se esperaba un entero
    }
    ```

    Este tipo de errores es directo y fácil de localizar: el compilador nos indica qué línea está mal y por qué.

* **Errores en tiempo de ejecución**: Estos errores son más sutiles. El programa compila perfectamente, pero al ejecutarse ocurre algo inesperado: datos inválidos, recursos inaccesibles, operaciones imposibl,...

    ```cpp
    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> v = {1, 2, 3};
        int x = v.at(10); // Error en tiempo de ejecución
    }

    ```

    El compilador no puede saber que `b` valdrá cero, así que no puede evitar el problema. Este tipo de errores pueden ser difíciles de encontrar y corregir, sobre todo si el programa es grande o complejo.

## ¿Qué son las excepciones?

Una **excepción** es una señal que indica que algo inesperado ha ocurrido mientras el programa se ejecutaba. En lugar de detener el programa bruscamente, C++ permite capturar esa señal y actuar en consecuencia. Esto se hace utilizando las palabras clave: `try` y `catch`.

Veamos un ejemplo:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3};

    try {
        // Intentamos acceder a una posición inválida
        int valor = numeros.at(10);
        std::cout << "Valor: " << valor << '\n';
    } catch (const std::out_of_range& e) {
        std::cerr << "Se capturó una excepción: " << e.what() << '\n';
    }

    return 0;
}
```

Aquí, usamos `vector::at`, que **lanza automáticamente** una excepción si se accede a una posición inválida. El código susceptible de fallar lo metemos en el bloque `try` y usamos `catch` para capturar la excepción y ejecutar las instrucciones que se deben de ejecutar cuando se produce. El programa **no se detiene**.

## Jerarquía de excepciones estándar

C++ define una jerarquía de clases para representar diferentes tipos de excepciones, todas derivadas de la clase base `std::exception`. Algunas de las más comunes incluyen:

* `std::out_of_range`: Se lanza cuando se accede a un contenedor con un índice inválido, por ejemplo usando `std::vector::at()`.

* `std::invalid_argument`: Indica que una función recibió un argumento no válido. Suele usarse para validar entradas.

* `std::domain_error`: Representa errores matemáticos cuando una operación no está definida, como la raíz cuadrada de un número negativo.

* `std::overflow_error` / `std::underflow_error`: Se utilizan para representar errores aritméticos donde se sobrepasa (overflow) o se queda corto (underflow) en los límites de un tipo numérico.

* `std::range_error`: Indica que se ha excedido el rango permitido de una operación aritmética, aunque no necesariamente asociado a overflow/underflow directo.

* `std::bad_cast`: Se lanza al usar `dynamic_cast` con referencia y fallar en la conversión de tipos entre clases relacionadas por herencia.

* `std::ios_base::failure`: Representa errores en operaciones de entrada/salida, como fallos al abrir o leer archivos.

* `std::length_error`: Se lanza cuando se intenta crear un contenedor con un tamaño mayor al permitido por la implementación.

* `std::bad_alloc`: Ocurre cuando falla la asignación dinámica de memoria (`new`), por falta de memoria disponible.
* `std::runtime_error`: Se usa para indicar problemas detectados durante la ejecución del programa, por ejemplo, condiciones inesperadas que no se pueden manejar localmente.

Esta jerarquía permite capturar errores de forma general o específica. Por ejemplo, podemos capturar primero errores más concretos y luego cualquier otro con `std::exception`:

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

int main() {
    try {
        std::vector<int> v = {1, 2, 3};

        // Acceso fuera de rango: lanza std::out_of_range
        int x = v.at(10);

        // Conversión inválida: lanza std::invalid_argument o std::out_of_range
        int numero = std::stoi("abc");

    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción por acceso fuera de rango: " << e.what() << '\n';

    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepción por argumento inválido: " << e.what() << '\n';

    } catch (const std::exception& e) {
        std::cerr << "Excepción genérica capturada: " << e.what() << '\n';
    }

    std::cout << "Programa finalizado.\n";
    return 0;
}

```

* Capturamos varias posibles excepciones.
* Usamos `v.at(10)`, que intenta acceder al elemento en la posición 10 de un vector con solo 3 elementos. Como esa posición no existe, la función `at()` lanza automáticamente una excepción del tipo `std::out_of_range`.
* Luego intenta convertir la cadena "abc" a un número entero con `std::stoi("abc")`. Esta función detecta que la cadena no representa un número válido y lanza una excepción `std::invalid_argument`.
* Si se produce otra excepción se captura con la excepción `std::exception` que es la más general.
* `e` es el objeto que representa la excepción que ha sido capturada en el bloque `catch`. Todas las excepciones estándar derivan de la clase base `std::exception`, que tiene un método llamado `what()`, que devuelve un mensaje descriptivo en formato de cadena de texto (`const char*`).
* `std::cerr` es un flujo de salida estándar de errores (error output stream). Se usa para mostrar mensajes de error o advertencia, diferenciándolos de la salida normal que va a `std::cout`.


## Lanzar nuestras propias excepciones con `throw`

Una vez entendido cómo capturar excepciones, podemos pasar al siguiente nivel: **lanzar nuestras propias excepciones** cuando detectamos una situación anómala. La instrucción `throw` permite **lanzar** una excepción.

Supongamos que escribimos una función para dividir dos enteros. Si el divisor es cero, no tiene sentido continuar, y es mejor **detener el flujo normal y avisar de forma estructurada**:

```cpp
#include <iostream>
#include <stdexcept> // Incluye excepciones estándar

int dividir(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("División por cero");
    }
    return a / b;
}

int main() {
    try {
        int resultado = dividir(10, 0);
        std::cout << "Resultado: " << resultado << '\n';
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}
```

 

