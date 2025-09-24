#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    std::cout << "La longitud es: " << texto.length() << std::endl;
    std::cout << "Último carácter: " << texto[texto.size() - 1] << std::endl;
    return 0;
}
