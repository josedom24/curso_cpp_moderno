# Ejemplos típicos de plantillas de funciones

Uno de los objetivos fundamentales de la programación genérica es escribir funciones reutilizables que operen con distintos tipos de datos sin necesidad de duplicar código. Para comprender cómo se aplican estos principios en la práctica, se analizan a continuación tres ejemplos clásicos: `max`, `swap` y `print`. Estos ejemplos ilustran cómo expresar comportamientos comunes de forma abstracta utilizando **plantillas de funciones**.


## Ejemplo 1: Función `max`

Determinar el mayor de dos valores que puedan compararse mediante el operador relacional `>`.


```cpp
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 4, b = 7;
    int mayor = max(a, b); // Devuelve 7

    double x = 3.5, y = 2.8;
    double mayorReal = max(x, y); // Devuelve 3.5

    std::string s1 = "apple", s2 = "banana";
    std::string mayorStr = max(s1, s2); // Devuelve "banana"
}
```

### Explicación

* Se declara una plantilla de función con un parámetro de tipo `T`.
* La función acepta dos argumentos del mismo tipo `T` y devuelve el mayor de ellos.
* El tipo `T` debe admitir la operación `a > b`.

### Ejemplos de uso

```cpp
```

---

## 2. Función `swap`

### Propósito

Intercambiar los valores de dos variables del mismo tipo.

### Declaración genérica

```cpp
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
```

### Explicación

* Se define una función plantilla que toma dos referencias a variables del mismo tipo `T`.
* Se realiza un intercambio utilizando una variable auxiliar temporal.
* No se devuelve ningún valor; la operación se realiza por efecto de las referencias.

### Ejemplos de uso

```cpp
int x = 10, y = 20;
swap(x, y); // Ahora x = 20, y = 10

std::string s1 = "uno", s2 = "dos";
swap(s1, s2); // Ahora s1 = "dos", s2 = "uno"
```

---

## 3. Función `print`

### Propósito

Imprimir un valor genérico en la salida estándar.

### Declaración genérica

```cpp
#include <iostream>

template <typename T>
void print(const T& valor) {
    std::cout << valor << std::endl;
}
```

### Explicación

* La función recibe un valor de tipo `T` por referencia constante.
* Utiliza `std::cout` para imprimirlo seguido de un salto de línea.
* El tipo `T` debe ser compatible con la operación de salida `operator<<`.

### Ejemplos de uso

```cpp
print(42);            // Imprime: 42
print(3.1416);        // Imprime: 3.1416
print("Hola mundo");  // Imprime: Hola mundo

std::string mensaje = "Texto genérico";
print(mensaje);       // Imprime: Texto genérico
```

---

## Consideraciones comunes

* En todos los ejemplos, el compilador **deduce automáticamente** el tipo `T` a partir de los argumentos.
* Las funciones solo son válidas si el tipo `T` admite las operaciones necesarias (`>`, asignación, impresión, etc.).
* Estos ejemplos reflejan operaciones muy comunes que se benefician enormemente del enfoque genérico, eliminando duplicación de código y mejorando la mantenibilidad.

---

## Conclusión

Los ejemplos `max`, `swap` y `print` son representativos del poder y la utilidad de las **plantillas de funciones** en la programación genérica. Permiten expresar operaciones generales de forma abstracta y reutilizable, facilitando un desarrollo más eficiente, seguro y legible en C++ moderno. Dominar estos patrones es esencial para comprender las estructuras genéricas más avanzadas presentes en la biblioteca estándar del lenguaje.
