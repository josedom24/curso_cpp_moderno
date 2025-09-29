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
