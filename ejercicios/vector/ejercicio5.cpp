#include <iostream>
#include <vector>
#include <algorithm> // std::sort

void mostrarVector(const std::vector<int>& v) {
    for (int valor : v) {
        std::cout << valor << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> numeros;
    int valor;

    std::cout << "Introduce números enteros (termina con -1):\n";
    while (true) {
        std::cin >> valor;
        if (valor == -1) break;
        numeros.push_back(valor);
    }

    std::sort(numeros.begin(), numeros.end());

    std::cout << "Vector ordenado:\n";
    mostrarVector(numeros);

    return 0;
}
