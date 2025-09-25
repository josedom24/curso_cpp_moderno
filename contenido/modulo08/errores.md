# Gestión de errores en C++

La gestión de errores es una parte esencial del desarrollo de software robusto y fiable. En C++, como en muchos otros lenguajes, los errores pueden clasificarse según el momento en que se detectan: **errores de compilación** y **errores en tiempo de ejecución**. Cada uno tiene características propias y exige diferentes estrategias para su tratamiento.

## Errores de compilación

Los errores de compilación son aquellos que el compilador detecta durante el proceso de traducción del código fuente a código máquina. Son errores **estáticos**, lo que significa que el programa ni siquiera llega a ejecutarse. Algunas causas típicas de errores de compilación son:

* Errores de sintaxis (por ejemplo, falta de un punto y coma).
* Uso de variables no declaradas.
* Incompatibilidad de tipos.
* Llamadas incorrectas a funciones (parámetros erróneos, nombres mal escritos).

Ejemplo:

```cpp
int main() {
    int x = "texto"; // Error de tipo: se esperaba un entero
}
```

En este ejemplo, el compilador detecta un intento de asignar una cadena a una variable de tipo `int`. El error se identifica antes de la ejecución, y el programa no puede compilarse hasta que se corrija.

Características:

* Son **fáciles de localizar**, ya que el compilador indica la línea afectada y la causa del error.
* Son **críticos** para la corrección del programa: deben resolverse completamente para que pueda ejecutarse.

## Errores en tiempo de ejecución

Los errores en tiempo de ejecución (también llamados **errores dinámicos**) son más sutiles: el programa compila correctamente, pero falla al ejecutarse debido a condiciones inesperadas. Estos errores pueden ser causados por:

* Datos inválidos proporcionados por el usuario.
* Recursos externos inaccesibles (archivos, red, etc.).
* Cálculos imposibles (división por cero).
* Acceso fuera de límites en contenedores.

Ejemplo:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    int x = v.at(10); // Error en tiempo de ejecución: acceso fuera de rango
}
```

En este caso, la función `at()` detecta que el índice 10 no es válido y lanza una **excepción**, que detiene el programa si no se maneja. Si en lugar de `at()` se usara el operador `[]`, el comportamiento sería **indefinido**: el programa podría fallar, devolver basura o incluso parecer funcionar.

Características:

* Son **difíciles de detectar a simple vista**, ya que dependen de los datos y del flujo del programa.
* Son **potencialmente peligrosos**, especialmente si no se controlan adecuadamente.


## Herramientas básicas para la detección de errores

### `std::cerr`: salida estándar de errores

El flujo `std::cerr` permite enviar mensajes de error directamente al canal de salida estándar de errores, separado de la salida normal (`std::cout`). Es útil para **mostrar información de diagnóstico** sin interferir con la salida principal del programa.

Ejemplo:

```cpp
#include <iostream>

int main() {
    int edad = -5;
    if (edad < 0) {
        std::cerr << "Error: la edad no puede ser negativa.\n";
    }
}
```

### `assert`: comprobaciones en tiempo de ejecución

La macro `assert` permite **verificar condiciones que deberían cumplirse durante la ejecución**. Si la condición es falsa, el programa termina inmediatamente, mostrando un mensaje con el archivo y la línea del fallo.

Ejemplo:

```cpp
#include <cassert>

int factorial(int n) {
    assert(n >= 0); // Comprobación: no se permite n negativo
    return (n == 0) ? 1 : n * factorial(n - 1);
}
```

`assert` solo está activa si se compila sin la macro `NDEBUG`. Es útil durante el desarrollo, pero no se recomienda en entornos de producción.

## Hacia un manejo robusto de errores: excepciones

Si bien `std::cerr` y `assert` son útiles, tienen limitaciones:

* No permiten **recuperarse del error**: el programa continúa o termina abruptamente.
* No permiten **separar el código normal del código de tratamiento de errores**.

Para solventar estas limitaciones, C++ ofrece un mecanismo robusto y estructurado: **las excepciones**, que permiten detectar, lanzar y capturar errores de forma controlada y jerárquica.

Ejemplo:

```cpp
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    try {
        int x = v.at(10); // Lanza una excepción
    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción capturada: " << e.what() << '\n';
    }
}
```

En el siguiente apartado estudiaremos en profundidad el sistema de excepciones de C++: cómo lanzar (`throw`), capturar (`catch`) y definir excepciones propias.

