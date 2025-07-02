#include <iostream>

int main() {
    double num;

    std::cout << "Introduce un número: ";
    std::cin >> num;

    // Evaluamos si el número es positivo, negativo o cero
    if (num > 0) {
        std::cout << "El número es positivo.\n";
    } else if (num < 0) {
        std::cout << "El número es negativo.\n";
    } else {
        std::cout << "El número es cero.\n";
    }

    return 0;
}
