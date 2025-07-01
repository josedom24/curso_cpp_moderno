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

* **Inicialización por asignación (forma clásica)**: Para inicializar una variable, asignarle un valor usamos el **operador de asignación** `=`. Por ejemplo:

   ```cpp
   int y = 5;
   double pi = 3.14159;
   ```

   No es aconsejable porque realiza conversiones implícitas, por ejemplo en esta asignación se pierde precisión:

   ```cpp
   int x = 3.14;  // Compila, pero trunca a 3.
   ```

* **Inicialización con paréntesis (constructor):** Se llama directamente al constructor (método que nos permite crear un objeto en programación orientada a objetos). Bormalmente se usa ecuando trabajamos con tipos complejos. Ejemplos:

   ```cpp
   int x(5);
   double pi(3.14159);
   ```

   Un problema que tiene es que podemos confundirla con la declaración de una función.

* **Inicialización uniforme con llaves**: Se empieza a usar desde C++11, y funciona para la inicialización de variables de tipos primitivos y tipos compuestos. 

   ```cpp
   int x{5};
   double pi{3.14159};
   ```

   Previene la conversión implícita no deseada y es la forma recomendad de inicialización. Ejemplo:

   ```cpp
   int x{3.14};  // ERROR: pérdida de precisión.
   ```

## Inferencia de tipos

Desde C++11, se puede usar la palabra clave `auto` para que el compilador deduzca automáticamente el tipo de la variable a partir del valor con que se inicializa:

```cpp
auto entero{42};       // entero es deducido como int
auto real{3.14};       // real es deducido como double
```

La inferencia solo funciona si la variable se inicializa en la declaración. El compilador **deduce el tipo automáticamente a partir del valor** con el que se inicializa la variable.

Otra forma de inferir el tipo es usando la función `decltype()`, que nos permite **obtener el tipo exacto de una expresión** sin evaluarla. Es muy útil cuando quieres declarar una variable con el mismo tipo que otra expresión o variable, sin escribir el tipo explícitamente. Devuelve exactamente el tipo que tiene la expresión, incluidas referencias, const, etc.

   ```cpp
   int x {5};
   decltype(x) y{10};   // y es int, como x
   ```

## Declaración múltiple

Se pueden declarar varias variables del mismo tipo en una sola línea:

```cpp
int a{1}, b{2}, c{3};
```

Sin embargo, es recomendable evitar esta práctica para mejorar la legibilidad.

## Ámbito y duración de almacenamiento de las variables en C++

Además de declarar e inicializar variables, es importante entender **dónde y cuánto tiempo** existen esas variables en memoria durante la ejecución del programa. Esto depende de su **ámbito** y **duración de almacenamiento**.

* **Ámbito (scope)**: El ámbito de una variable es la región del programa donde la variable es accesible. Existen varios tipos:
   * **Ámbito de bloque (local)**: Variables declaradas dentro de un bloque `{ ... }` solo son visibles dentro de ese bloque.
   * **Ámbito global**: Variables declaradas fuera de cualquier función o clase son accesibles desde cualquier parte del código posterior a su declaración.
   * **Ámbito de función (parámetros)**: Los parámetros de una función tienen ámbito local a esa función.
* **Duración de almacenamiento (lifetime)**: La duración de almacenamiento es el tiempo durante el cual la variable existe en memoria. Tipos:
   * **Automática (local)**: Variables locales normales tienen duración automática: existen mientras se ejecuta el bloque donde fueron declaradas y se destruyen al salir de ese bloque.
   * **Estática (global)**: Variables con duración estática existen durante toda la ejecución del programa. Se inicializan una sola vez y mantienen su valor entre llamadas.
      * Variables globales tienen duración estática.
      * Variables locales declaradas con la palabra clave `static` también tienen duración estática.
   * **Dinámica**: Variables creadas con operadores de asignación dinámica (`new`/`delete`) existen hasta que se libere la memoria explícitamente. No se tratan aquí en detalle, pues forman parte de gestión avanzada de memoria.

## Ejemplo

```cpp
#include <iostream>

int main() {
    int edad{30};                   // Inicialización uniforme
    auto salario{2500.75};          // Inferencia con auto (double)
    decltype(salario) PI{3.14159};  // Inferencia con decltype
    
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Salario: " << salario << "\n";
    std::cout << "Pi: " << PI << "\n";

    return 0;
}
```

