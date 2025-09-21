#include <iostream>
#include <array>

void encontrarMaxMin(const std::array<int, 8>& arr, int& maximo, int& minimo) {
    maximo = arr[0];
    minimo = arr[0];
    for (int valor : arr) {
        if (valor > maximo) maximo = valor;
        if (valor < minimo) minimo = valor;
    }
}

int main() {
    std::array<int, 8> numeros;

    std::cout << "Introduce 8 números enteros:\n";
    for (int& n : numeros) {
        std::cin >> n;
    }

    int maximo, minimo;
    encontrarMaxMin(numeros, maximo, minimo);

    std::cout << "Máximo: " << maximo << "\nMínimo: " << minimo << '\n';

    return 0;
}
