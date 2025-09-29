#include <iostream>
#include <array>

void modificarYMostrar(std::array<int, 5>& arr) {
    for (int& n : arr) {
        n *= 2; // Modificar: duplicar cada valor
    }

    for (int n : arr) {
        std::cout << n << " "; // Mostrar
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 5> datos{1, 2, 3, 4, 5};
    modificarYMostrar(datos);
    return 0;
}
