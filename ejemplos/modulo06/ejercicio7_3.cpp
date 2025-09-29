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
