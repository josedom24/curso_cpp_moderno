#include <iostream>
#include <cmath>  // Para usar std::pow

int main() {
    double base, resultado;
    int exponente;

    std::cout << "Introduce la base: ";
    std::cin >> base;

    std::cout << "Introduce el exponente: ";
    std::cin >> exponente;

    if (exponente > 0) {
        resultado = std::pow(base, exponente);
        std::cout << "Resultado: " << resultado << "\n";
    } else if (exponente == 0) {
        std::cout << "Resultado: 1\n";
    } else {
        resultado = 1 / std::pow(base, -exponente);
        std::cout << "Resultado: " << resultado << "\n";
    }

    return 0;
}
