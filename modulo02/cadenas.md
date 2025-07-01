# Introducción a las cadenas de caracteres

En C++ moderno existen dos formas principales de trabajar con cadenas de caracteres:

1. **La forma tradicional heredada de C:** Una cadena de caracteres es simplemente un **array de caracteres** terminado en un carácter especial `'\0'` (llamado **carácter nulo**).
   Esta forma sigue existiendo, pero es más propensa a errores y requiere mayor cuidado por parte del programador.
2. **La forma moderna con la clase `std::string`:**    C++ proporciona la clase `std::string` en la biblioteca estándar, que permite trabajar con cadenas de forma más segura, sencilla y flexible.

## Uso de la clase `std::string`

Para declarar una variable de tipo cadena, utilizamos la clase `std::string`. Podemos inicializarla directamente en el momento de la declaración utilizando **inicialización uniforme `{}`**, que es la forma recomendada en C++ moderno. Ejemplo:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string cadena1 {};
    std::string cadena2 {"Hola Mundo"};

    std::cout << cadena2 << std::endl;
}
```

Es necesario incluir el archivo de cabeceras `string` para trabajar con la calse `std::string`.

## Indexación de caracteres

Los caracteres que componen una cadena se pueden acceder utilizando un **índice numérico**,teniendo en cuenta que el primer carácter está en la posición `0`. Por ejemplo:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    std::cout << texto[0] << std::endl;  // Imprime: H
}
```
Hay que tener en cuenta que el acceso con `texto[índice]` **no realiza comprobación de límites**. Si se desea una forma más segura, se puede utilizar el método `at()`:

```cpp
std::cout << texto.at(0) << std::endl;  // Imprime: H, pero verifica que el índice sea válido
```

## Tamaño de la cadena

El método `length()` o `size()` devuelve el número de caracteres que contiene la cadena. Veamos un ejemplo:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    std::cout << "La longitud es: " << texto.length() << std::endl;
    std::cout << "Último carácter: " << texto[texto.size() - 1] << std::endl;
}
```

Ambos métodos `length()` y `size()` son equivalentes en `std::string`.


## Concatenación de cadenas

El operador `+` permite **unir** dos o más cadenas, generando una nueva. Veamos un ejemplo:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string nombre {"Pepe"};
    std::string apellidos {"García"};
    std::string nombre_completo {};

    nombre_completo = nombre + " " + apellidos;

    std::cout << nombre_completo << std::endl;
}
```

