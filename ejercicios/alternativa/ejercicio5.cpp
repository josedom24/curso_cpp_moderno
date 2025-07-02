#include <iostream>
#include <string>

int main() {
    std::string usuario, contraseña;

    std::cout << "Introduce el usuario: ";
    std::getline(std::cin, usuario);

    std::cout << "Introduce la contraseña: ";
    std::getline(std::cin, contraseña);

    // Comprobamos que usuario y contraseña coincidan con los datos correctos
    if (usuario == "pepe" && contraseña == "asdasd") {
        std::cout << "Has entrado al sistema.\n";
    } else {
        std::cout << "Error: usuario o contraseña incorrectos.\n";
    }

    return 0;
}
