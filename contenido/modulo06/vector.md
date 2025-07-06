# Vectores: `std::vector`

`std::vector` es un contenedor dinámico de la biblioteca estándar de C++ que permite almacenar colecciones de elementos de tamaño variable. Internamente, gestiona un bloque de memoria contiguo que puede crecer o reducirse según sea necesario.

A diferencia de los arrays clásicos o de `std::array`, el tamaño de un `std::vector` **no es fijo** y puede modificarse en tiempo de ejecución mediante métodos como `push_back`, `pop_back` o `resize`.
Otra diferencias es que mientras en los array se utiliza la memoria *stack*, con los vectores se usa memoria dinámica *heap*.

Para utilizar `std::vector` es necesario incluir el fichero de cabecera `<vector>`.


## Declaración e inicialización de `std::vector`

Veamos varios ejemplos de declaración usando inicialización uniforme:

```cpp
#include <vector>

int main() {
    std::vector<int> vacio {};                       // Vector vacío
    std::vector<int> enteros {1, 2, 3, 4, 5};       // Vector con elementos iniciales
    std::vector<double> reales {3.14, 2.71, 1.618}; // Vector de reales
}
```

## Acceso a los elementos

Existen varias formas de acceder a los elementos de un `std::vector`: como en `std::array` podemos usar indexación usando `[ ]`, acceso seguro medirante el método `at()` o acceso al primer o último elemento usando los métodos `front()` y `back()`:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> datos {10, 20, 30};

    // Acceso mediante el operador []
    std::cout << datos[0] << std::endl;

    // Acceso mediante el método at (con comprobación de límites)
    std::cout << datos.at(1) << std::endl;

    // Acceso al primer y último elemento
    std::cout << datos.front() << std::endl;
    std::cout << datos.back() << std::endl;
}
```

## Métodos más importantes de `std::vector`


Por supuesto, aquí tienes la sección solicitada reescrita como **lista simple**, con un lenguaje formal y ampliando la descripción de cada método para mayor claridad:


## Métodos más importantes de `std::vector`

A continuación, se describen los métodos fundamentales para el uso de un `std::vector`:

* `size()`: Devuelve el número de elementos almacenados actualmente en el vector. El valor devuelto es de tipo `std::size_t`
* `empty()`: Devuelve un valor booleano (`true` o `false`) que indica si el vector está vacío, es decir, si no contiene ningún elemento.
* `push_back(valor)`: Añade un nuevo elemento al final del vector, incrementando su tamaño en uno. Si es necesario, el vector realoca su almacenamiento interno para acomodar el nuevo elemento.
* `pop_back()`: Elimina el último elemento del vector, reduciendo su tamaño en uno. Si el vector está vacío, el comportamiento es indefinido, por lo que debe comprobarse previamente con `empty()`.
* `resize(n)`: Cambia el tamaño del vector a `n` elementos. Si el nuevo tamaño es mayor que el actual, se añaden nuevos elementos inicializados con el valor por defecto del tipo almacenado. Si el tamaño es menor, se eliminan los elementos excedentes.
* `clear()`: Elimina todos los elementos del vector, dejándolo vacío. No libera necesariamente la memoria reservada internamente, por lo que la capacidad del vector puede permanecer inalterada.
* `front()`:  Devuelve una referencia al primer elemento del vector. Si el vector está vacío, el comportamiento es indefinido.
* `back()`: Devuelve una referencia al último elemento del vector. Si el vector está vacío, el comportamiento es indefinido.
* `at(indice)`: Devuelve una referencia al elemento ubicado en la posición especificada por `indice`. Si el índice está fuera de los límites válidos del vector, lanza una excepción de tipo `std::out_of_range`.

Ejemplo:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numeros {1, 2, 3};

    // Añadir elementos al final
    numeros.push_back(4);
    numeros.push_back(5);

    // Mostrar contenido
    std::cout << "Contenido del vector: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Tamaño
    std::cout << "Tamaño: " << numeros.size() << std::endl;

    // Eliminar el último elemento
    numeros.pop_back();

    // Acceso al primer y último elemento
    std::cout << "Primero: " << numeros.front() << ", Último: " << numeros.back() << std::endl;

    // Redimensionar a 2 elementos
    numeros.resize(2);
    std::cout << "Vector tras resize(2): ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Vaciar el vector
    numeros.clear();
    std::cout << "¿Está vacío? " << (numeros.empty() ? "Sí" : "No") << std::endl;
}
```

Por supuesto, aquí tienes el mismo apartado adaptado específicamente para **`std::vector`**, respetando el formato y el estilo formal, con ejemplos completos y utilizando **inicialización uniforme**:


## Recorridos de un `std::vector`

### Bucle clásico con índice

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros {1, 2, 3, 4, 5};

    for (std::size_t i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
```

### Bucle range-based for loop (bucle basado en rangos)

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros {1, 2, 3, 4, 5};

    for (int valor : numeros) {
        std::cout << valor << " ";
    }

    std::cout << std::endl;
    return 0;
}
```

### Recorrido con iteradores

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros {1, 2, 3, 4, 5};

    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}
```

Claro, aquí tienes el apartado reescrito específicamente para **`std::vector`**, manteniendo el estilo formal, las explicaciones claras y utilizando **inicialización uniforme** en los ejemplos:


## Envío de `std::vector` como parámetro a funciones

El paso de un `std::vector` como argumento a una función se puede realizar de diferentes maneras, de forma similar a lo visto con otros contenedores como `std::string` o `std::array`. Aunque es posible pasar un `std::vector` por **valor**, lo habitual y recomendable es hacerlo por **referencia constante**, especialmente cuando no es necesario modificar el contenido. De esta forma se evita la copia de toda la estructura, lo que podría afectar negativamente al rendimiento.

```cpp
#include <iostream>
#include <vector>

// Función que muestra el contenido de un std::vector
void mostrar(const std::vector<int>& vec) {
    for (int n : vec) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Inicialización uniforme del vector
    std::vector<int> datos {10, 20, 30, 40, 50};

    // Llamada a la función mostrar
    mostrar(datos);

    return 0;
}
```

En caso de que se necesite modificar el contenido del vector dentro de la función, lo adecuado es pasarlo por referencia sin la palabra clave `const`.

```cpp
#include <iostream>
#include <vector>

// Función que modifica y muestra un std::vector
void modificarYMostrar(std::vector<int>& vec) {
    for (int& n : vec) {
        n *= 2; // Duplicar cada valor
    }

    for (int n : vec) {
        std::cout << n << " "; // Mostrar el resultado
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> datos {1, 2, 3, 4, 5};

    modificarYMostrar(datos);

    return 0;
}
```
