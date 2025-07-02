#include <iostream>

int main() {
    double num1, num2;

    std::cout << "Introduce el dividendo: ";
    std::cin >> num1;

    std::cout << "Introduce el divisor: ";
    std::cin >> num2;

    // Comprobamos que el divisor no sea cero antes de dividir
    if (num2 != 0) {
        std::cout << "Resultado: " << num1 / num2 << "\n";
    } else {
        std::cout << "Error: no se puede dividir entre cero.\n";
    }

    return 0;
}
