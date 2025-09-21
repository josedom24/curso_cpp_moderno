#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> edades = {12, 25, 70, 15, 45, 67, 17, 18, 64, 65};

    // Contadores
    int menores = 0;
    int adultos = 0;
    int mayores = 0;

    // Lambda para clasificar edades y contar
    std::for_each(edades.begin(), edades.end(), [&](int edad) {
        if (edad < 18) ++menores;
        else if (edad <= 64) ++adultos;
        else ++mayores;
    });

    std::cout << "Menores de edad: " << menores << "\n";
    std::cout << "Adultos: " << adultos << "\n";
    std::cout << "Mayores: " << mayores << "\n";

    return 0;
}
