#include <iostream>
#include <string>

int main() {
    std::string edadTexto {};
    std::cout << "Introduce tu edad: ";
    std::getline(std::cin, edadTexto);

    int edad {std::stoi(edadTexto)};
    std::string mensaje {"Tienes " + std::to_string(edad) + " años."};
    std::cout << mensaje << std::endl;

    return 0;
}
