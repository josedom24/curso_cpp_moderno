#include <iostream>
#include <cmath>    // Para sqrt

int main() {
    double cateto1 { 0.0 };
    double cateto2 { 0.0 };

    std::cout << "Introduce la longitud del primer cateto: ";
    std::cin >> cateto1;

    std::cout << "Introduce la longitud del segundo cateto: ";
    std::cin >> cateto2;

    // Calculamos la hipotenusa con el teorema de Pitágoras
    double hipotenusa { std::sqrt(cateto1 * cateto1 + cateto2 * cateto2) };

    std::cout << "La hipotenusa mide: " << hipotenusa << std::endl;

    return 0;
}
