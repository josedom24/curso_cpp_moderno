# Tipos definidos por el usuario: `enum class`

En programación, a menudo necesitamos representar un conjunto de valores posibles claramente definidos y finitos. Por ejemplo, los días de la semana, los colores de un semáforo, o el estado de una tarea.

Los **tipos enumerados** (`enum`) nos permiten precisamente eso: definir un conjunto de valores simbólicos, legibles y con significado, que el compilador puede tratar como valores concretos.

Sin embargo, en C++ clásico, los `enum` tradicionales tienen limitaciones que pueden generar errores. Por eso, en **C++ moderno**, se prefiere el uso de **`enum class`**, que soluciona esos problemas.

## Tipo `enum` tradicional

En este ejemplo definimos una enumeración `Color` de tipo `enum` con tres posibles valores, posteriormente creamos una variable `miColor` del tipo `Color` y cuyo valor es `Rojo`.

```cpp
enum Color { Rojo, Verde, Azul };

Color miColor = Rojo;
```

El uso de `enum` tradicionales tiene una serie de problemas:

* Los nombres de los valores se introducen en el espacio de nombres global.
* Los valores son convertibles a `int` de forma implícita, lo que puede dar lugar a errores.

## `enum class`: Enumeraciones fuertemente tipadas

En C++ moderno se introduce el tipo `enum class`, que resuelve los problemas anteriores. La definición de la numeración es similar, pero vemos a que al declarar la variable `miColor` el valor se indica dentro de un espacio de nombres:

```cpp
enum class Color { Rojo, Verde, Azul };

Color miColor = Color::Rojo;
```

* Los valores están "encapsulados" dentro del nombre de la enumeración. Es decir, en un espacio de nombres independiente.
* No se convierten implícitamente a `int`, con lo que conseguimos una mayor seguridad de tipos.
* Mejor legibilidad y mantenimiento del código.

Veamos un ejemplo:
```cpp
#include <iostream>

enum class Direccion { Norte, Sur, Este, Oeste };

int main() {
    Direccion d {Direccion::Norte};

    if (d == Direccion::Norte) {
        std::cout << "Vamos hacia el Norte" << std::endl;
    } else {
        std::cout << "No vamos hacia el Norte" << std::endl;
    }

    return 0;
}
```
* La enumeración `Direccion` se crea en un ámbito global.
* Vemos como declaramos la variable `d` de tipo `Direccion` y como le asignamos el valor `Direccion::Norte`.
* También comprobamos como podemos usar el operador de igualdad para comparar la variable con un valor. Por defecto cada valor se convierte a un entero que es el que se compara.

## Conversión de tipo

Por defecto, cada valor que definimos en una `enum class``se relacionan con un entero, siendo el primer elemento el valor 0, el segundo el 1, y así sucesivamente.

En la declaración de la enumeración podemos establecer el valor entero de cada uno de los valores que definimos.

Aunque `enum class` no se convierte automáticamente a `int`, a veces es útil obtener su valor numérico:

```cpp
#include <iostream>

enum class Estado { Inactivo = 1, Activo = 2, Suspendido = 3 };

int main() {
    Estado e {Estado::Activo};

    std::cout << "Valor numérico: " << static_cast<int>(e) << std::endl;

    return 0;
}
```

Utilizamos la función `static_cast<int>` para realizar la conversión a entero.

Si partimos de un entero también podemos hacer la conversión a `enum class`:

```cpp
#include <iostream>

enum class Estado { Inactivo = 1, Activo = 2, Suspendido = 3 };

int main() {
    // Pedir un valor numérico al usuario
    int valor;
    std::cout << "Ingresa un valor (1: Inactivo, 2: Activo, 3: Suspendido): ";
    std::cin >> valor;

    // Verificar si el valor ingresado es válido
    if (valor >= 1 && valor <= 3) {
        // Convertir el valor numérico al tipo enum class usando static_cast
        Estado e {static_cast<Estado>(valor)};

        // Imprimir el valor numérico del enum
        std::cout << "El valor numérico del estado es: " << static_cast<int>(e) << std::endl;
    } else {
        std::cout << "Valor no válido." << std::endl;
    }

    return 0;
}
```


## Definir el tipo subyacente

Por defecto, el tipo subyacente es `int`, pero se puede especificar otro tipo:

```cpp
enum class CodigoError : unsigned char { Ok = 0, Advertencia = 1, Error = 2 };
```

Esto puede ser útil para ahorrar memoria o por requisitos específicos.

## Ejemplo final

Define un `enum class` llamado `DiaSemana` con los valores `Lunes`, `Martes`, `Miércoles`, `Jueves`, `Viernes`, `Sábado`, `Domingo`. Escribe un programa que:

* Pida al usuario un número entre 1 y 7.
* Muestre el día correspondiente usando `enum class`.

```cpp
#include <iostream>

enum class DiaSemana { Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo };

std::string diaAString(DiaSemana dia) {
    switch (dia) {
        case DiaSemana::Lunes: return "Lunes";
        case DiaSemana::Martes: return "Martes";
        case DiaSemana::Miercoles: return "Miercoles";
        case DiaSemana::Jueves: return "Jueves";
        case DiaSemana::Viernes: return "Viernes";
        case DiaSemana::Sabado: return "Sabado";
        case DiaSemana::Domingo: return "Domingo";
        default: return "Desconocido";
    }
}

int main() {
    int numero;

    std::cout << "Introduce un número del 1 al 7 para indicar el día de la semana: ";
    std::cin >> numero;

    if (numero < 1 || numero > 7) {
        std::cout << "Número inválido." << std::endl;
        return 1;
    }

    DiaSemana dia {static_cast<DiaSemana>(numero)};

    std::cout << "El día seleccionado es: " << diaAString(dia) << std::endl;

    return 0;
}
```