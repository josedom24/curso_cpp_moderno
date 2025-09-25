#include <iostream>
#include <string>

int main() {
    std::string secreto = "asdasd";
    std::string clave;

    do {
        std::cout << "Dime la clave: ";
        std::getline(std::cin, clave);

        if (clave != secreto) {
            std::cout << "Clave incorrecta." << std::endl;
        }
    } while (clave != secreto);

    std::cout << "Bienvenido." << std::endl;

    return 0;
}
