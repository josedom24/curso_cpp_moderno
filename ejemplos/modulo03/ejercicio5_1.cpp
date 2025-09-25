#include <iostream>
#include <string>

int main() {
    const std::string clave_correcta{"asdasd"};
    std::string clave{};

    std::cout << "Introduce la clave: ";
    std::getline(std::cin, clave);

    while (clave != clave_correcta) {
        std::cout << "Clave incorrecta.\n";
        std::cout << "Introduce la clave: ";
        std::getline(std::cin, clave);
    }
    std::cout << "Bienvenido.\n";
    return 0;
}
