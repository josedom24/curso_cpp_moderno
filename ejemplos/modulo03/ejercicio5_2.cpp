#include <iostream>
#include <string>

int main() {
    const std::string clave_correcta{"asdasd"};
    std::string clave{};
    char opcion{};

    std::cout << "Introduce la clave: ";
    std::getline(std::cin, clave);

    while (clave != clave_correcta) {
        std::cout << "Clave incorrecta.\n";
        std::cout << "¿Deseas intentar de nuevo? (S/N): ";
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar el salto de línea pendiente

        if (std::toupper(opcion) == 'N') {
            break;
        }

        std::cout << "Introduce la clave: ";
        std::getline(std::cin, clave);
    }

    if (clave == clave_correcta) {
        std::cout << "Bienvenido.\n";
    }

    std::cout << "Programa terminado.\n";
    return 0;
}
