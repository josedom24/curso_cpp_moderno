# Declaración e inicialización de constantes

Las **constantes** representan valores que no deben modificarse durante la ejecución de un programa. El uso correcto de constantes mejora la legibilidad, seguridad y mantenimiento del código, además de permitir al compilador realizar optimizaciones adicionales.

C++ moderno proporciona diversas formas para declarar y trabajar con constantes, que se describen a continuación:

## Constantes con `const`

La palabra clave `const` indica que el valor de una variable no puede modificarse después de su inicialización. Ejemplo:

```cpp
const int edad {25};
const double pi {3.14159};
const char inicial {'A'};
const bool esValido {true};
```

* Las variables declaradas como `const` deben ser inicializadas en el momento de su declaración.
* Intentar modificar su valor generará un error de compilación.

## Constantes con `constexpr`

La palabra clave `constexpr` indica que el valor de la variable es **una constante en tiempo de compilación**. Es una extensión más estricta y potente que `const`. Ejemplos:

### 📌 **Ejemplo:**

```cpp
constexpr int tamaño {10};
constexpr double radio {2.5};
constexpr char letra {'B'};
```

* El valor debe poder evaluarse en tiempo de compilación.
* Es preferible a `const` cuando se necesita que la constante sea conocida en tiempo de compilación, por ejemplo, para tamaños de arrays o plantillas.


## Directiva del preprocesodor `#define`

En versiones más antiguas de C++ se solía usar una directiva de preprocesador llamada `#define`, que nos permite hacer sustituciones de texto a valores, es decir poner alias a ciertos valores. No son variables reales, por ejemplo:

```cpp
#define PI 3.14159
```

Esta forma de trabajar con constantes está desaconsejada en C++ moderno.

