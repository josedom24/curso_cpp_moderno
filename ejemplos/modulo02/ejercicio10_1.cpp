#include <iostream>
#include <string>

int main() {
    std::string nombre {};
    int edad {};

    std::cout << "Bienvenido..." << std::endl;
    std::cout << "Dime tu nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Dime la edad de " << nombre << ": ";
    std::cin >> edad;

    std::cout << nombre << " tiene " << edad << " años." << std::endl;

    return 0;
}
