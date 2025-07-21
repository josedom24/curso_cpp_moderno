# Uso de funciones genéricas con contenedores STL

La programación genérica en C++ permite escribir funciones y algoritmos que operan sobre una amplia variedad de tipos sin perder eficiencia ni claridad. Una de las aplicaciones más relevantes de esta capacidad es su integración con los **contenedores de la STL** (Standard Template Library), como `std::vector`, `std::list` o `std::map`.

En este apartado se muestra cómo aprovechar las **funciones plantilla** para trabajar con colecciones heterogéneas de datos, respetando la filosofía de **abstracción sin pérdida de rendimiento** que caracteriza al lenguaje C++.

Vamos a:

* Aplicar funciones genéricas sobre distintos tipos de contenedores.
* Escribir algoritmos reutilizables con independencia del tipo de datos almacenado.
* Comprender las restricciones necesarias para que una función plantilla funcione correctamente con un contenedor.

## Ejemplo básico: impresión de elementos

Una función que recorra cualquier contenedor iterable e imprima sus elementos puede definirse de forma genérica así:

```cpp
#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename Container>
void print_container(const Container& cont) {
    for (const auto& elem : cont) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}
int main() {
    std::vector<int> v = {1, 2, 3};
    std::list<std::string> l = {"uno", "dos", "tres"};

    print_container(v); // Imprime: 1 2 3
    print_container(l); // Imprime: uno dos tres
}
```

Esta función es válida para cualquier contenedor que implemente los métodos `begin()` y `end()` y cuyos elementos puedan imprimirse con `operator<<`.


## Funciones genéricas de utilidad

También es posible escribir funciones plantilla que **modifiquen** o **transformen** los elementos de un contenedor. Por ejemplo, aplicar una operación a cada elemento:

```cpp
#include <iostream>
#include <vector>

template <typename Container>
void print_container(const Container& cont) {
    for (const auto& elem : cont) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

template <typename Container, typename Function>
void apply_to_all(Container& cont, Function f) {
    for (auto& elem : cont) {
        f(elem);
    }
}
int main() {
    std::vector<int> v = {1, 2, 3, 4};
    apply_to_all(v, [](int& x) { x *= 2; });
    print_container(v); // Imprime: 2 4 6 8

}
```
Aquí se hace uso de una expresión lambda como parámetro, lo que permite aplicar cualquier transformación sin reescribir la función genérica.


## Consideraciones de compatibilidad

Para que una función genérica funcione correctamente con un contenedor de la STL, es necesario que:

* El tipo `Container` implemente `begin()` y `end()` (esto es cierto para todos los contenedores estándar).
* La operación usada dentro de la función (como `operator<<`, `+`, `*`, etc.) esté definida para el tipo de elemento (`T`).
* En caso de pasar funciones como parámetros, estas deben aceptar el tipo de elemento del contenedor (o ser genéricas a su vez).
