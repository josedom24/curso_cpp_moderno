#include <iostream>
#include <array>

void invertirArray(std::array<int, 10>& arr) {
    for (size_t i = 0; i < arr.size() / 2; ++i) {
        std::swap(arr[i], arr[arr.size() - 1 - i]);
    }
}

void mostrarArray(const std::array<int, 10>& arr) {
    for (int valor : arr) {
        std::cout << valor << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::array<int, 10> numeros;

    std::cout << "Introduce 10 números enteros:\n";
    for (int& n : numeros) {
        std::cin >> n;
    }

    invertirArray(numeros);

    std::cout << "Array invertido:\n";
    mostrarArray(numeros);

    return 0;
}
