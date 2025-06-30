# Declaración e inicialización de variables

Las **variables** son identificadores que permiten almacenar datos en memoria durante la ejecución de un programa. Cada variable tiene un **tipo** que determina qué clase de datos puede contener, así como la cantidad de memoria que ocupará.

El nombre de una variable puede estar formado por letras, dígitos y subrayados, pero no puede empezar por un dígito. Los nombres se suelen indicar en minúsculas.

## Declaración de variables

Para declarar una variable en C++ es necesario indicar:

* El **tipo** de dato que almacenará.
* Un **nombre identificador** único dentro del ámbito.
* Opcionalmente, un **valor inicial** (inicialización).

Ejemplo básico:

```cpp
int edad;          // Declaración sin inicializar
double salario = 1500.50;  // Declaración con inicialización
```
**Una variable no inicializada tiene un valor indeterminado**, lo que significa que su contenido puede ser cualquier cosa (basura en memoria). Usar ese valor sin inicializar es un error y puede causar comportamientos impredecibles.




## Inicialización de variables

En C++ moderno existen varias formas de inicializar variables. Inicializar una variable correctamente es fundamental para evitar valores indeterminados.

### 1. Inicialización por asignación (forma clásica):

Para inicializar una variable, asignarle un valor usamos el **operador de asignación** `=`.

```cpp
int x = 5;
```

### 2. Inicialización con paréntesis (constructor):

```cpp
int x(5);
```

### 3. Inicialización uniforme con llaves (recomendada en C++11 y posteriores):

```cpp
int x{5};
```

Esta forma evita conversiones implícitas no deseadas y previene la pérdida de datos.

---

## Inferencia de tipo con `auto`

Desde C++11, se puede usar la palabra clave `auto` para que el compilador deduzca automáticamente el tipo de la variable a partir del valor con que se inicializa:

```cpp
auto entero = 42;       // entero es deducido como int
auto real = 3.14;       // real es deducido como double
auto texto = "Hola";    // texto es deducido como const char*
```

**Importante:** La inferencia solo funciona si la variable se inicializa en la declaración.

---

## Declaración múltiple

Se pueden declarar varias variables del mismo tipo en una sola línea:

```cpp
int a = 1, b = 2, c = 3;
```

Sin embargo, es recomendable evitar esta práctica para mejorar la legibilidad.

---

## Constantes

Para declarar variables cuyo valor no cambiará durante la ejecución, se usa `const`:

```cpp
const double PI = 3.14159;
```

Intentar modificar una constante genera un error en compilación.

---

## Variables estáticas y globales

* **Variables estáticas** dentro de funciones mantienen su valor entre llamadas.

```cpp
void contador() {
    static int cuenta = 0;
    cuenta++;
    std::cout << cuenta << std::endl;
}
```

* **Variables globales** están declaradas fuera de funciones y son accesibles desde todo el programa, aunque su uso se desaconseja por problemas de mantenimiento y seguridad.

---

## Reglas importantes

* El nombre de la variable debe comenzar con letra o guion bajo (`_`), seguido de letras, dígitos o guiones bajos.
* No pueden usarse palabras reservadas del lenguaje como identificadores.
* El tipo debe ser conocido en tiempo de compilación o deducible con `auto`.
* Variables no inicializadas contienen valores indeterminados (salvo que sean estáticas o globales, que se inicializan a cero).

---

## Buenas prácticas en C++ moderno

* Usar **inicialización uniforme** con llaves `{}` para evitar conversiones implícitas no deseadas.
* Preferir la **inferencia de tipo con `auto`** cuando el tipo es evidente para mejorar la legibilidad.
* Declarar variables lo más cerca posible del punto donde se usen.
* Usar `const` siempre que el valor no deba cambiar, para mejorar la seguridad y optimización.
* Evitar variables globales en favor de variables locales o encapsulación en clases.

---

## Ejemplo completo

```cpp
#include <iostream>

int main() {
    int edad{30};              // Inicialización uniforme
    auto salario = 2500.75;    // Inferencia con auto (double)
    const double PI{3.14159};  // Constante
    
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Salario: " << salario << "\n";
    std::cout << "Pi: " << PI << "\n";

    return 0;
}
```

---

¿Quieres que prepare también material para el ámbito de variables y duración de almacenamiento?

Perfecto, aquí tienes un material formal y didáctico sobre **ámbito y duración de almacenamiento de variables** en C++ moderno, complementando el tema anterior:

---

# Ámbito y duración de almacenamiento de las variables en C++

Además de declarar e inicializar variables, es importante entender **dónde y cuánto tiempo** existen esas variables en memoria durante la ejecución del programa. Esto depende de su **ámbito** y **duración de almacenamiento**.

---

## Ámbito (scope)

El ámbito de una variable es la región del programa donde la variable es accesible.

### Tipos de ámbito:

1. **Ámbito de bloque (local)**
   Variables declaradas dentro de un bloque `{ ... }` solo son visibles dentro de ese bloque.

```cpp
void funcion() {
    int x = 5;  // x solo existe dentro de esta función
}
```

2. **Ámbito global**
   Variables declaradas fuera de cualquier función o clase son accesibles desde cualquier parte del código posterior a su declaración.

```cpp
int global = 10;  // variable global
```

3. **Ámbito de función (parámetros)**
   Los parámetros de una función tienen ámbito local a esa función.

---

## Duración de almacenamiento (lifetime)

La duración de almacenamiento es el tiempo durante el cual la variable existe en memoria.

### Tipos de duración:

1. **Automática (local)**
   Variables locales normales tienen duración automática: existen mientras se ejecuta el bloque donde fueron declaradas y se destruyen al salir de ese bloque.

```cpp
void f() {
    int x = 10;  // duración automática
}
```

2. **Estática**
   Variables con duración estática existen durante toda la ejecución del programa. Se inicializan una sola vez y mantienen su valor entre llamadas.

* Variables globales tienen duración estática.
* Variables locales declaradas con la palabra clave `static` también tienen duración estática.

```cpp
void contador() {
    static int cuenta = 0;
    cuenta++;
    std::cout << cuenta << std::endl;
}
```

3. **Dinámica**
   Variables creadas con operadores de asignación dinámica (`new`/`delete`) existen hasta que se libere la memoria explícitamente. No se tratan aquí en detalle, pues forman parte de gestión avanzada de memoria.

---

## Resumen de ámbito y duración

| Tipo de variable        | Ámbito                                        | Duración                                   |
| ----------------------- | --------------------------------------------- | ------------------------------------------ |
| Variable local          | Bloque donde está declarada                   | Automática (mientras se ejecuta el bloque) |
| Variable local `static` | Bloque donde está declarada                   | Estática (toda la ejecución del programa)  |
| Variable global         | Todo el programa (a partir de su declaración) | Estática (toda la ejecución del programa)  |

---

## Buenas prácticas

* Prefiere **variables locales** con duración automática para evitar efectos secundarios.
* Usa variables **estáticas** solo cuando se necesite conservar estado entre llamadas.
* Minimiza el uso de variables globales para mantener el código modular y seguro.

---

Si quieres, también puedo ayudarte a preparar ejemplos prácticos para ilustrar cada tipo de ámbito y duración. ¿Quieres que los incluya?

Por supuesto, aquí tienes una explicación clara y formal sobre `decltype`, perfecta para tu curso de introducción a C++ moderno:

---

# `decltype` en C++ moderno

`decltype` es una **especie de operador** introducido en C++11 que permite **obtener el tipo exacto de una expresión** sin evaluarla. Es muy útil cuando quieres declarar una variable con el mismo tipo que otra expresión o variable, sin escribir el tipo explícitamente.

---

## ¿Para qué sirve?

* Deducir el tipo de una expresión compleja sin conocerlo exactamente.
* Facilitar la escritura de código genérico.
* Ayudar a evitar errores de tipos en expresiones complicadas.

---

## Sintaxis básica

```cpp
decltype(expresión) variable;
```

Aquí, `variable` tendrá el mismo tipo que el resultado de la `expresión`.

---

## Ejemplos

```cpp
int x = 5;
decltype(x) y = 10;   // y es de tipo int, igual que x

double pi = 3.14;
decltype(pi) radio = 2.5;  // radio es double

int& ref = x;
decltype(ref) otra_ref = x; // otra_ref es referencia a int (int&)
```

---

## Características importantes

* `decltype` **no evalúa** la expresión, solo examina su tipo.
* Si la expresión es una variable, `decltype` deduce el tipo **exacto**, incluyendo si es referencia o const.
* Puede usarse con expresiones más complejas, no solo variables simples.

---

## Ejemplo avanzado

```cpp
int a = 1;
int& b = a;

decltype(a) c = 2;    // c es int
decltype(b) d = a;    // d es int& (referencia a int)
```

---

## Diferencia con `auto`

* `auto` deduce el tipo de la variable a partir del valor con que se inicializa, pero **siempre quita referencias y const** a menos que se use referencia explícita.
* `decltype` deduce el tipo **exacto**, incluyendo referencias y const.

---

## Uso típico en plantillas y programación genérica

`decltype` permite escribir funciones y clases que manipulan tipos complejos sin conocerlos de antemano.

---

¿Quieres que te prepare un pequeño apartado con ejemplos prácticos para que los alumnos lo entiendan mejor?
