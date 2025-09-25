#include <iostream>

int main() {
    int edad{};
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        if (edad >= 65) {
            std::cout << "Eres un adulto mayor." << std::endl;
        } else {
            std::cout << "Eres un adulto." << std::endl;
        }
    } else {
        std::cout << "Eres menor de edad." << std::endl;
    }

    return 0;
}
