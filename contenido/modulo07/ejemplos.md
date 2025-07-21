# Ejemplos típicos de plantillas de funciones

Uno de los objetivos fundamentales de la programación genérica es escribir funciones reutilizables que operen con distintos tipos de datos sin necesidad de duplicar código. Para comprender cómo se aplican estos principios en la práctica, se analizan a continuación tres ejemplos clásicos: `max`, `swap` y `print`. Estos ejemplos ilustran cómo expresar comportamientos comunes de forma abstracta utilizando **plantillas de funciones**.


## Ejemplo 1: Función `max`

Determinar el mayor de dos valores que puedan compararse mediante el operador relacional `>`.


```cpp
#include <iostream>
#include <string>

template <typename T>
T mi_max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 4, b = 7;
    int mayor = mi_max(a, b); // Devuelve 7
    std::cout << "Mayor entre " << a << " y " << b << " es: " << mayor << '\n';

    double x = 3.5, y = 2.8;
    double mayorReal = mi_max(x, y); // Devuelve 3.5
    std::cout << "Mayor entre " << x << " y " << y << " es: " << mayorReal << '\n';

    std::string s1 = "apple", s2 = "banana";
    std::string mayorStr = mi_max(s1, s2); // Devuelve "banana"
    std::cout << "Mayor entre \"" << s1 << "\" y \"" << s2 << "\" es: " << mayorStr << '\n';

    return 0;
}

```

* Se declara una plantilla de función con un parámetro de tipo `T`.
* La función acepta dos argumentos del mismo tipo `T` y devuelve el mayor de ellos.
* El tipo `T` debe admitir la operación `a > b`.

## Ejemplo 2: Función `swap`

Intercambiar los valores de dos variables del mismo tipo.

```cpp
#include <iostream>
#include <string>

// Plantilla de función para intercambiar dos valores
template <typename T>
void mi_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Antes de swap (int): x = " << x << ", y = " << y << '\n';
    mi_swap(x, y);
    std::cout << "Después de swap (int): x = " << x << ", y = " << y << '\n';

    double a = 3.14, b = 2.71;
    std::cout << "Antes de swap (double): a = " << a << ", b = " << b << '\n';
    mi_swap(a, b);
    std::cout << "Después de swap (double): a = " << a << ", b = " << b << '\n';

    std::string s1 = "rojo", s2 = "azul";
    std::cout << "Antes de swap (string): s1 = " << s1 << ", s2 = " << s2 << '\n';
    mi_swap(s1, s2);
    std::cout << "Después de swap (string): s1 = " << s1 << ", s2 = " << s2 << '\n';

    return 0;
}
```

* Se define una función plantilla que toma dos referencias a variables del mismo tipo `T`.
* Se realiza un intercambio utilizando una variable auxiliar temporal.
* No se devuelve ningún valor; la operación se realiza por efecto de las referencias.


## Ejemplo 3: Función `print`

Imprimir un valor genérico en la salida estándar.

```cpp
#include <iostream>
#include <string>

// Función plantilla para imprimir un valor genérico
template <typename T>
void print(const T& valor) {
    std::cout << valor << '\n';
}

int main() {
    int x = 42;
    double pi = 3.14159;
    std::string mensaje = "Hola, mundo";

    std::cout << "Impresión de un int: ";
    print(x);

    std::cout << "Impresión de un double: ";
    print(pi);

    std::cout << "Impresión de un string: ";
    print(mensaje);

    return 0;
}
```
* La función recibe un valor de tipo `T` por referencia constante.
* Utiliza `std::cout` para imprimirlo seguido de un salto de línea.
* El tipo `T` debe ser compatible con la operación de salida `operator<<`.

