#include <iostream>
#include <array>

double sumaArray(const std::array<int, 6>& arr) {
    int suma = 0;
    for (int valor : arr) {
        suma += valor;
    }
    return suma;
}

int main() {
    std::array<int, 6> numeros;

    std::cout << "Introduce 6 números enteros:\n";
    for (int& n : numeros) {
        std::cin >> n;
    }

    double suma = sumaArray(numeros);
    double media = suma / numeros.size();

    std::cout << "Suma: " << suma << "\nMedia: " << media << '\n';

    return 0;
}
