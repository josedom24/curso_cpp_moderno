#include <iostream>
#include <vector>

int calcularSuma(const std::vector<int>& v) {
    int suma = 0;
    for (int valor : v) {
        suma += valor;
    }
    return suma;
}

int main() {
    std::vector<int> numeros;
    int valor;

    std::cout << "Introduce números enteros (valor negativo para terminar):\n";
    while (true) {
        std::cin >> valor;
        if (valor < 0) break;
        numeros.push_back(valor);
    }

    if (!numeros.empty()) {
        int suma = calcularSuma(numeros);
        double media = static_cast<double>(suma) / numeros.size();

        std::cout << "Suma: " << suma << "\nMedia: " << media << '\n';
    } else {
        std::cout << "No se han introducido valores válidos.\n";
    }

    return 0;
}
