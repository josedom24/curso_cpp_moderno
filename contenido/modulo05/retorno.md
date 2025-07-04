# Valores de retorno de una función

En C++, las funciones pueden devolver un valor tras su ejecución. Para ello utilizamos la instrucción `return` y veremos que existen varias formas de hacerlo:


## Retorno por valor

La forma más simple y habitual de devolver un valor. **La función devuelve una copia** del valor calculado, lo que es seguro y fácil de entender. Se puede considerar que la función es una expresión del tipo de datos que devuelve. Por ejemplo, esta función la podemos considerar un entero:

```cpp
#include <iostream>

// Función que calcula el cuadrado de un número
int cuadrado(int x) {
    return x * x;
}

int main() {
    int numero;

    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    int resultado = cuadrado(numero);  // Llamada a la función

    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;

    return 0;
}
```

Hay que tener en cuenta que si el valor devuelto es grande (por ejemplo, un `std::vector`), puede haber un coste asociado a la copia. 

## Retorno por referencia

La función devuelve **una referencia a un valor existente**, en lugar de una copia. Esta forma tiene sentido cuando el valor que se devuelve **existe fuera de la función**  y seguirá existiendo después de que la función termine y cuando se desea hacer modificaciones del valor original.

Veamos un ejemplo:

```cpp
#include <iostream>

// Variable global
int global = 10;

// Función que devuelve una referencia a la variable global
int& obtenerGlobal() {
    return global;
}

int main() {
    std::cout << "Valor inicial de global: " << global << std::endl;

    // Modificamos el valor de global a través de la referencia devuelta
    obtenerGlobal() = 42;

    std::cout << "Valor de global después de modificarlo: " << global << std::endl;

    return 0;
}
```
Recuerda que puedes devolver una referencia de una variable global, o estática (usando el modificador `static`). De una variable local a la función no puedes devolver referencia.


## Retorno por referencia constante

Si no se desea permitir la modificación directa del valor, pero se quiere evitar la copia, se puede devolver una **referencia constante**:

```cpp
#include <iostream>
#include <string>

// Función que devuelve una referencia constante a un string estático
const std::string& obtenerNombre() {
    static std::string nombre = "Carlos";
    return nombre;
}

int main() {
    const std::string& nombre = obtenerNombre();  // Llamada a la función

    std::cout << "El nombre es: " << nombre << std::endl;

    return 0;
}
```

En este caso, debe garantizarse que el valor referenciado siga existiendo tras finalizar la función (en el ejemplo, se usa `static` para lograrlo).


## Retorno de punteros y consideraciones de seguridad

También es posible devolver un puntero, lo que otorga gran flexibilidad, pero exige precaución.


```cpp
#include <iostream>

// Función que devuelve un puntero a un entero creado en memoria dinámica
int* crearEntero() {
    return new int(42);  // Reservamos memoria en el heap
}

int main() {
    int* ptr = crearEntero();  // Obtenemos el puntero

    std::cout << "Valor del entero: " << *ptr << std::endl;

    // Importante: liberar la memoria para evitar fugas
    delete ptr;

    return 0;
}
```

* Recuerda que si se devuelve un puntero a memoria dinámica, el programador debe encargarse de liberarla posteriormente, lo que implica riesgos de fugas o errores.
* Es preferible, en C++ moderno, devolver **punteros inteligentes** (`std::unique_ptr`, `std::shared_ptr`) para gestionar la propiedad de forma segura y automática.

Veamos un ejemplo de esto último:

```cpp
#include <memory>

std::unique_ptr<int> crearEntero() {
    return std::make_unique<int>(42);
}
```

De esta forma, el recurso se libera automáticamente al salir del ámbito del puntero inteligente.

```cpp
#include <iostream>
#include <memory>

// Función que devuelve un unique_ptr apuntando a un entero con valor 42
std::unique_ptr<int> crearEntero() {
    return std::make_unique<int>(42);
}

int main() {
    // Obtener el puntero inteligente desde la función
    std::unique_ptr<int> miEntero = crearEntero();

    // Verificar si el puntero no es nulo antes de usarlo
    if (miEntero) {
        std::cout << "El valor del entero es: " << *miEntero << std::endl;
    } else {
        std::cout << "El puntero es nulo." << std::endl;
    }

    // No es necesario liberar memoria manualmente, unique_ptr lo hace automáticamente
    return 0;
}
```