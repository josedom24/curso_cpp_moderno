#include <iostream>

int main() {
    double num1, num2;

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    // Estructura alternativa múltiple para comparar dos números
    if (num1 > num2) {
        std::cout << "El primer número es mayor que el segundo.\n";
    } else if (num1 < num2) {
        std::cout << "El primer número es menor que el segundo.\n";
    } else {
        std::cout << "Ambos números son iguales.\n";
    }

    return 0;
}
