# Tipos de datos carácter y booleano

## Tipos de datos carácter

Nos permiten representar caracteres. Sin embargo, internamente, estos tipos son tratados como tipos enteros, lo que permite realizar operaciones aritméticas o bit a bit sobre ellos.

* `char` o `signed char`: Normalmente, aunque depende del compilador, son equivalentes. El tamaño de este tipo es de **1 byte**, por lo que me permite guardar valores enteros **desde el -128 hasta el 127**. Por lo que permite representar **caracteres ASCII estándar**.
* `unsigned char`: En este caso, también ocupa **1 byte**, pero me permite representar enteros sin signos, por lo tanto el rango representado es **desde el 0 al 255**. Permite representar caracteres ASCII extendido.
* Existen otros tipos como `char8_t`, `char16_t`, `char32_t` o `wchar_t` que nos permiten representar caracteres que ocupan más de 1 byte. Aunque depende de la plataforma y el compilador normalmente nos permiten representar  caracteres UTF_8, UTF-16, UTF-32 y Unicode respectivamente.

Por último indicar que los literales de tipo de caracteres se indican entre comillas simples, por ejemplo `'A'`.

## Tipo de datos booleano

El **tipo de datos booleano** nos permite representar situaciones en las que solo hay dos posibilidades: **verdadero** o **falso**.

En C++, usamos el tipo `bool` (que ocupa **1 byte) para trabajar con este tipo de datos. Y sus valores posibles son:
* `true`: Representa que la condición o el valor es **verdadero**.
* `false`: Representa que la condición o el valor es **falso**.

Hay que tener en cuenta que **cualquier valor distinto de 0** se interpreta como **verdadero** en una condición.

Utilizaremos los **Operadores relacionales y lógicos** para obtener el resultado booleanos de expresiones lógicas.