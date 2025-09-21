#include <iostream>
#include <array>

// Función que muestra el contenido de un std::array de enteros
void mostrarArray(const std::array<int, 5>& arr) {
    for (int elemento : arr) {
        std::cout << elemento << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::array<int, 5> valores;

    std::cout << "Introduce 5 números enteros:\n";
    for (int& valor : valores) {
        std::cin >> valor;
    }

    std::cout << "Contenido del array: ";
    mostrarArray(valores);

    return 0;
}
