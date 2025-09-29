#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numeros{1, 2, 3, 4, 5};

    std::cout << "Tamaño: " << numeros.size() << std::endl;
    std::cout << "Primer elemento: " << numeros.front() << std::endl;
    std::cout << "Último elemento: " << numeros.back() << std::endl;

    numeros.fill(0); // Todos los elementos a 0

    for (size_t i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i] << " ";
        std::cout << numeros.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
