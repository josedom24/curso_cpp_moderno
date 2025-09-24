#include <iostream>
#include <string>

int main() {
    std::string cadena1 {};
    std::string cadena2 {"Hola Mundo"};

    std::cout << cadena2 << std::endl;
    std::cout << cadena2[0] << std::endl;  // Imprime: H
    std::cout << cadena2.at(1) << std::endl;  // Imprime: o
    return 0;
}
