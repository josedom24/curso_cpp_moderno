#include <iostream>

int main() {
    double num1 { 0.0 };
    double num2 { 0.0 };

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    double suma { num1 + num2 };
    double resta { num1 - num2 };
    double multiplicacion { num1 * num2 };
    double division { num1 / num2 };  // No se contempla división por cero en este ejercicio secuencial

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;

    return 0;
}
