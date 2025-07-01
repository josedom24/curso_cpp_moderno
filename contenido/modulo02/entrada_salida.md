# Entrada y salida estándar

En C++ podemos interactuar con el usuario a través de la **entrada estándar** (habitualmente el teclado) y la **salida estándar** (habitualmente la pantalla).
Para ello, utilizamos los objetos `std::cin` y `std::cout` que nos proporciona la biblioteca estándar.

Para poder utilizar estas herramientas, es necesario incluir la biblioteca de cabecera `iostream`. Veamos un ejemplo para comenzar:


```cpp
#include <iostream>
#include <string>

int main() {
    std::string nombre {};
    int edad {};

    std::cout << "Bienvenido..." << std::endl;
    std::cout << "Dime tu nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Dime la edad de " << nombre << ": ";
    std::cin >> edad;

    std::cout << nombre << " tiene " << edad << " años." << std::endl;

    return 0;
}
```

## Salida por pantalla: `std::cout`

El objeto `std::cout` representa la salida estándar, normalmente la pantalla.

* Utilizamos el operador de inserción `<<` para enviar datos a la salida.
* Podemos combinar varios datos en la misma instrucción.
* El manipulador `std::endl` finaliza la línea, igual que `\n`, y además **fuerza el vaciado del búfer de salida**.

Ejemplo:

```cpp
std::cout << "Hola " << "mundo" << std::endl;
```

## Entrada por teclado: `std::cin`

El objeto `std::cin` representa la entrada estándar, normalmente el teclado.

* Utilizamos el operador de extracción `>>` para leer datos y almacenarlos en variables.
* El operador `>>` realiza automáticamente la conversión al tipo de la variable, siempre que sea posible.

Ejemplo:

```cpp
int edad {};
std::cout << "Introduce tu edad: ";
std::cin >> edad;
```

Si el usuario introduce un valor que no corresponde al tipo de la variable (por ejemplo, texto en lugar de un número), se producirá un error de entrada y la variable no se modificará.


## Lectura de cadenas de caracteres

Cuando queremos leer una cadena de texto que pueda contener espacios, no podemos utilizar `std::cin >>`, ya que este operador **solo lee hasta el primer espacio**. Ejemplo:

```cpp
std::string nombre {};
std::cout << "Introduce tu nombre: ";
std::cin >> nombre;
std::cout << nombre << std::endl;
```

Si el usuario introduce `"Pepe García"`, solo se guardará `"Pepe"`.

La solución es usar la función `std::getline` que permite leer toda la línea, incluidos los espacios. Ejemplo:

```cpp
std::string nombre {};
std::cout << "Introduce tu nombre completo: ";
std::getline(std::cin, nombre);
std::cout << "Hola, " << nombre << std::endl;
```

Cuando se combinan ambas formas de entrada, puede ocurrir que quede un carácter de salto de línea `'\n'` pendiente en el búfer de entrada, lo que provoca que `std::getline` lea una línea vacía. Ejemplo:


```cpp
int edad {};
std::string nombre {};

std::cout << "Introduce tu edad: ";
std::cin >> edad;

std::cout << "Introduce tu nombre completo: ";
std::getline(std::cin, nombre);  // Lee una cadena vacía
```

Para evitar este problema, podemos utilizar `std::cin.ignore()` antes de llamar a `std::getline`, que limpia el buffer de entrada. Ejemplo:

```cpp
#include <iostream>
#include <string>

int main() {
    int edad {};
    std::string nombre {};

    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    std::cin.ignore();  // Limpiar búfer

    std::cout << "Introduce tu nombre completo: ";
    std::getline(std::cin, nombre);

    std::cout << nombre << " tiene " << edad << " años." << std::endl;

    return 0;
}
```
