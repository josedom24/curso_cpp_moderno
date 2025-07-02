#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Introduce las longitudes de los tres lados del triángulo:\n";
    std::cin >> a >> b >> c;

    // Primero comprobamos si es un triángulo válido
    if (a + b > c && a + c > b && b + c > a) {
        
        // Comprobamos tipo de triángulo por sus lados
        if (a == b && b == c) {
            std::cout << "Triángulo equilátero.\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Triángulo isósceles.\n";
        } else {
            std::cout << "Triángulo escaleno.\n";
        }

        // Comprobamos si es un triángulo rectángulo
        // Buscamos la hipotenusa (el mayor lado) para aplicar Pitágoras
        double hipotenusa, cateto1, cateto2;

        if (a >= b && a >= c) {
            hipotenusa = a;
            cateto1 = b;
            cateto2 = c;
        } else if (b >= a && b >= c) {
            hipotenusa = b;
            cateto1 = a;
            cateto2 = c;
        } else {
            hipotenusa = c;
            cateto1 = a;
            cateto2 = b;
        }

        // Usamos std::abs y un pequeño margen para evitar problemas de precisión
        if (std::abs(std::pow(hipotenusa, 2) - (std::pow(cateto1, 2) + std::pow(cateto2, 2))) < 1e-6) {
            std::cout << "Además, es un triángulo rectángulo.\n";
        }

    } else {
        std::cout << "Los lados no forman un triángulo válido.\n";
    }

    return 0;
}
