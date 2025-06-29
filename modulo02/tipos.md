# Tipos de datos fundamentales

En programación, un **dato** representa una pieza de información que puede ser manipulada por un programa. Los datos pueden adoptar distintas formas, como números, caracteres o valores booleanos, A etas formas se le llama **Tipo de datos** y permiten al compilador saber:

* Qué clase de información se está almacenando.
* Qué operaciones son válidas para dichos datos.
* Cuánta memoria debe reservarse para almacenar los datos.

Los datos se pueden representar de de distintas maneras:

* **Literales**: Los literales nos permiten representar valores. Por ejemplo un literal entero podría ser el 5.
* **Variables**: Una variables es un identificador que guarda un valor. Las variables se declaran de un determinado tipo de datos. Por ejemplo una variable entera puede guardar datos enteros.
* **Constantes**: Podemos declarar un valor de un determinado tipo por medio de un identificador. Mientras el valor de una variable puede cambiar a lo largo de la ejecución de un programa, las constantes no pueden cambiar.
* **Expresiones**: Por último indicar que podemos hacer operaciones entre los distintos datos. El tipo de dato de una expresión dependerá del resultado de la operación.

## Tipos de datos carácter

Nos permiten representar caracteres. Sin embargo, internamente, estos tipos son tratados como tipos enteros, lo que permite realizar operaciones aritméticas o bit a bit sobre ellos.

* `char` o `signed char`: Normalmente, aunque depende del compilador, son equivalentes. El tamaño de este tipo es de **1 byte**, por lo que me permite guardar valores enteros **desde el -128 hasta el 127**. Por lo que permite representar **caracteres ASCII estándar**.
* `unsigned char`: En este caso, también ocupa **1 byte**, pero me permite representar enteros sin signos, por lo tanto el rango representado es **desde el 0 al 255**. Permite representar caracteres ASCII extendido.
* Existen otros tipos como `char8_t`, `char16_t`, `char32_t` o `wchar_t` que nos permiten representar caracteres que ocupan más de 1 byte. Aunque depende de la plataforma y el compilador normalmente nos permiten representar  caracteres UTF_8, UTF-16, UTF-32 y Unicode respectivamente.

Por último indicar que los literales de tipo de caracteres se indican entre comillas simples, por ejemplo `'A'`.

## Tipo de datos enteros





---

### 📊 **Tabla de Tipos de Datos Fundamentales en C++ Moderno**

| Tipo de Dato             | Qué Representa                                     | Tamaño Mínimo            | Rango de Valores Aprox.                                    |
| ------------------------ | -------------------------------------------------- | ------------------------ | ---------------------------------------------------------- |
| **`bool`**               | Valor lógico (verdadero o falso)                   | 1 byte                   | `false` (0) o `true` (1)                                   |
                                   |
| **`short`**              | Entero corto con signo                             | 2 bytes (16 bits)        | `-32,768` a `32,767`                                       |
| **`unsigned short`**     | Entero corto sin signo                             | 2 bytes (16 bits)        | `0` a `65,535`                                             |
| **`int`**                | Entero estándar con signo                          | 4 bytes (32 bits)\*\*    | `-2,147,483,648` a `2,147,483,647`                         |
| **`unsigned int`**       | Entero estándar sin signo                          | 4 bytes (32 bits)\*\*    | `0` a `4,294,967,295`                                      |
| **`long`**               | Entero largo con signo                             | Al menos 4 bytes         | En sistemas de 64 bits suele ser de 8 bytes                |
| **`unsigned long`**      | Entero largo sin signo                             | Al menos 4 bytes         | Dependiendo de la arquitectura                             |
| **`long long`**          | Entero muy largo con signo                         | 8 bytes (64 bits)        | `-9,223,372,036,854,775,808` a `9,223,372,036,854,775,807` |
| **`unsigned long long`** | Entero muy largo sin signo                         | 8 bytes (64 bits)        | `0` a `18,446,744,073,709,551,615`                         |
| **`float`**              | Número real en punto flotante, precisión simple    | 4 bytes (32 bits)        | ±1.2 × 10⁻³⁸ a ±3.4 × 10³⁸, \~7 dígitos decimales          |
| **`double`**             | Número real en punto flotante, precisión doble     | 8 bytes (64 bits)        | ±2.3 × 10⁻³⁰⁸ a ±1.7 × 10³⁰⁸, \~15 dígitos decimales       |
| **`long double`**        | Número real en punto flotante, precisión extendida | Depende del sistema      | Mayor precisión que `double`, arquitectura dependiente     |
| **`void`**               | Ausencia de tipo                                   | No aplicable             | No almacena ningún valor                                   |
| **`decltype(nullptr)`**  | Tipo de puntero nulo (`nullptr`)                   | Depende de la plataforma | Representa un valor nulo para punteros                     |

---

### 🔹 **Notas Importantes:**

* El tamaño mínimo es garantizado por el estándar, pero los compiladores pueden ofrecer tamaños mayores.
* El rango de valores puede variar si el tipo `char` es **con signo o sin signo** por defecto, dependiendo del compilador.
* Para obtener tamaños concretos en un entorno específico, se puede usar `sizeof(tipo)` en C++.
* Para trabajar con tamaños garantizados (por ejemplo, exactamente 32 bits), se recomienda usar los tipos de `<cstdint>`, como `int32_t`, `uint64_t`, etc.

---

¿Quieres que prepare esta tabla en **formato visual para diapositivas** o como parte de un material educativo listo para usar? 🎨
