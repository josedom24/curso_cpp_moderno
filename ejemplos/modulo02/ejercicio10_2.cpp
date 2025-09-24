#include <iostream>
#include <string>

int main() {
    int edad {};
    std::string nombre {};

    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    std::cin.ignore();  // Limpiar búfer

    std::cout << "Introduce tu nombre completo: ";
    std::getline(std::cin, nombre);

    std::cout << nombre << " tiene " << edad << " años." << std::endl;

    return 0;
}
