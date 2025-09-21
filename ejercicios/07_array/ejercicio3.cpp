#include <iostream>
#include <array>

bool buscarValor(const std::array<int, 7>& arr, int valor) {
    for (int n : arr) {
        if (n == valor) {
            return true;
        }
    }
    return false;
}

int main() {
    std::array<int, 7> numeros;

    std::cout << "Introduce 7 números enteros:\n";
    for (int& n : numeros) {
        std::cin >> n;
    }

    int valorBuscado;
    std::cout << "Introduce un valor a buscar: ";
    std::cin >> valorBuscado;

    if (buscarValor(numeros, valorBuscado)) {
        std::cout << "El valor " << valorBuscado << " está en el array.\n";
    } else {
        std::cout << "El valor " << valorBuscado << " no está en el array.\n";
    }

    return 0;
}
