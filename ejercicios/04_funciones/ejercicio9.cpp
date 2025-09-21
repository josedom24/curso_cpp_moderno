#include <iostream>

int main() {
    int edad;
    int menores = 0;
    int adultos = 0;
    int mayores = 0;

    std::cout << "Introduce edades (negativo para terminar):" << std::endl;
    std::cin >> edad;
    while (edad >= 0) {
        if ([](int e) { return e < 18; }(edad)) ++menores;
        else if ([](int e) { return e >= 18 && e <= 64; }(edad)) ++adultos;
        else if ([](int e) { return e >= 65; }(edad)) ++mayores;
        std::cin >> edad;
    }

    std::cout << "Menores de edad: " << menores << std::endl;
    std::cout << "Adultos: " << adultos << std::endl;
    std::cout << "Mayores: " << mayores << std::endl;

    return 0;
}