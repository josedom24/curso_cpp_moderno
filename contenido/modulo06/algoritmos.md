# Algoritmos de la Biblioteca Estándar de C++

La biblioteca estándar de C++ proporciona un conjunto de **algoritmos genéricos**, definidos en el encabezado `<algorithm>`. Estos algoritmos permiten realizar de forma segura y eficiente operaciones comunes sobre colecciones de datos, como:

* Ordenación.
* Búsqueda.
* Transformaciones.
* Contado de elementos.
* Comprobaciones de propiedades.
* Reordenamientos.

Los algoritmos están diseñados para operar sobre **rangos de iteradores**, lo que los hace aplicables a la mayoría de los contenedores estándar. En nuestro caso, lo vamos a usar en los contenedores que hemos estudiado en los apartados anteriores: `std::string`, `std::array`, `std::vector` y `std::list`.

`std::list` no proporciona acceso aleatorio, por lo que no se pueden aplicar algunos algoritmos como `std::sort`. Sin embargo, `std::list` tiene su propio método `sort()`.

## Algoritmos más habituales

A continuación, algunos de los algoritmos más utilizados:

* `std::sort`: Ordena los elementos en orden ascendente
* `std::reverse`: Invierte el orden de los elementos
* `std::count`: Cuenta las apariciones de un valor específico
* `std::find`: Busca un valor y devuelve un iterador al mismo
* `std::all_of`: Comprueba si todos los elementos cumplen una condición
* `std::any_of`: Comprueba si al menos un elemento cumple una condición
* `std::none_of`: Comprueba si ningún elemento cumple una condición
* `std::fill`: Asigna un valor a todos los elementos del contenedor
* `std::transform`: Aplica una función a cada elemento y guarda el resultado
* `std::copy`: Copia elementos de un contenedor a otro


## Ejemplos

Ejemplo con `std::string`:

```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // Para funciones como ::tolower

int main() {
    std::string texto = "Algoritmo";

    // std::transform: Convertir todos los caracteres a minúsculas
    std::transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    std::cout << "Texto en minúsculas: " << texto << std::endl;

    // std::sort: Ordenar los caracteres alfabéticamente
    std::sort(texto.begin(), texto.end());
    std::cout << "Texto ordenado: " << texto << std::endl;

    // std::reverse: Invertir el orden de los caracteres
    std::reverse(texto.begin(), texto.end());
    std::cout << "Texto invertido: " << texto << std::endl;

    // std::count: Contar cuántas veces aparece la letra 'o'
    int numO = std::count(texto.begin(), texto.end(), 'o');
    std::cout << "La letra 'o' aparece " << numO << " veces." << std::endl;

    // std::find: Buscar la letra 'a'
    auto it = std::find(texto.begin(), texto.end(), 'a');
    if (it != texto.end()) {
        std::cout << "La letra 'a' se encuentra en el texto." << std::endl;
    }

    // std::all_of: Comprobar si todos los caracteres son minúsculas
    if (std::all_of(texto.begin(), texto.end(), ::islower)) {
        std::cout << "Todos los caracteres son minúsculas." << std::endl;
    }

    // std::any_of: Comprobar si hay al menos una vocal
    if (std::any_of(texto.begin(), texto.end(), [](char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    })) {
        std::cout << "Hay al menos una vocal." << std::endl;
    }

    // std::none_of: Comprobar si no hay dígitos
    if (std::none_of(texto.begin(), texto.end(), ::isdigit)) {
        std::cout << "No hay dígitos en el texto." << std::endl;
    }
}
```
Ejemplo con `std::array`:

```cpp
#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> numeros = {3, 1, 4, 1, 5};

    // std::sort: Ordenar el array
    std::sort(numeros.begin(), numeros.end());
    std::cout << "Array ordenado: ";
    for (int n : numeros) std::cout << n << " ";
    std::cout << std::endl;

    // std::reverse: Invertir el array
    std::reverse(numeros.begin(), numeros.end());
    std::cout << "Array invertido: ";
    for (int n : numeros) std::cout << n << " ";
    std::cout << std::endl;

    // std::count: Contar cuántas veces aparece el 1
    int cantidad = std::count(numeros.begin(), numeros.end(), 1);
    std::cout << "El número 1 aparece " << cantidad << " veces." << std::endl;

    // std::find: Buscar el 4
    auto it = std::find(numeros.begin(), numeros.end(), 4);
    if (it != numeros.end()) {
        std::cout << "El número 4 está en el array." << std::endl;
    }

    // std::fill: Rellenar el array con ceros
    std::fill(numeros.begin(), numeros.end(), 0);
    std::cout << "Array tras rellenarlo con ceros: ";
    for (int n : numeros) std::cout << n << " ";
    std::cout << std::endl;
}
```
Ejemplo con `std::vector`:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> datos = {7, 2, 5, 3, 9};

    // std::any_of: ¿Hay algún número mayor que 5?
    if (std::any_of(datos.begin(), datos.end(), [](int x){ return x > 5; })) {
        std::cout << "Hay al menos un valor mayor que 5." << std::endl;
    }

    // std::all_of: ¿Todos son positivos?
    if (std::all_of(datos.begin(), datos.end(), [](int x){ return x > 0; })) {
        std::cout << "Todos los elementos son positivos." << std::endl;
    }

    // std::sort: Ordenar el vector
    std::sort(datos.begin(), datos.end());
    std::cout << "Vector ordenado: ";
    for (int x : datos) std::cout << x << " ";
    std::cout << std::endl;

    // std::transform: Multiplicar cada elemento por 2
    std::transform(datos.begin(), datos.end(), datos.begin(), [](int x){ return x * 2; });
    std::cout << "Vector tras multiplicar por 2: ";
    for (int x : datos) std::cout << x << " ";
    std::cout << std::endl;

    // std::copy: Copiar el vector a otro vector
    std::vector<int> copia(datos.size());
    std::copy(datos.begin(), datos.end(), copia.begin());
    std::cout << "Copia del vector: ";
    for (int x : copia) std::cout << x << " ";
    std::cout << std::endl;
}
```
Ejemplo con `std::list`:

```cpp
#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> lista = {4, 2, 7, 3, 1};

    // std::list no permite std::sort, se usa su método propio
    lista.sort();
    std::cout << "Lista ordenada: ";
    for (int n : lista) std::cout << n << " ";
    std::cout << std::endl;

    // std::reverse funciona porque opera sobre iteradores bidireccionales
    std::reverse(lista.begin(), lista.end());
    std::cout << "Lista invertida: ";
    for (int n : lista) std::cout << n << " ";
    std::cout << std::endl;

    // std::count: contar apariciones de un valor
    int numVeces = std::count(lista.begin(), lista.end(), 2);
    std::cout << "El número 2 aparece " << numVeces << " veces." << std::endl;

    // std::find: buscar un valor
    auto it = std::find(lista.begin(), lista.end(), 7);
    if (it != lista.end()) {
        std::cout << "El número 7 se encuentra en la lista." << std::endl;
    }
}
```

---

## ✅ **5. Conclusión**

Los algoritmos de la biblioteca estándar son esenciales para manipular datos de forma eficiente y segura en C++. Su diseño genérico permite aplicarlos a múltiples contenedores, mejorando la legibilidad y robustez del código.

Un buen dominio de estos algoritmos es fundamental para desarrollar programas profesionales, eficientes y fáciles de mantener.

---

¿Quieres que prepare ejercicios prácticos para que los estudiantes practiquen estos algoritmos con diferentes contenedores? 🎯
