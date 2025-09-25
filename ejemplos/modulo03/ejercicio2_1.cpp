#include <iostream>

int main() {
    int edad{};
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Eres mayor de edad." << std::endl;
    }

    std::cout << "Programa finalizado." << std::endl;
    return 0;
}
