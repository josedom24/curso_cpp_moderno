#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> telefonos;
    std::string nombre, telefono;

    std::cout << "Introduce nombres y teléfonos (escribe 'fin' como nombre para terminar):\n";
    while (true) {
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        if (nombre == "fin") break;

        std::cout << "Teléfono: ";
        std::getline(std::cin, telefono);
        telefonos[nombre] = telefono;
    }

    std::cout << "Introduce un nombre para buscar su teléfono: ";
    std::getline(std::cin, nombre);

    if (telefonos.count(nombre)) {
        std::cout << "Teléfono de " << nombre << ": " << telefonos[nombre] << "\n";
    } else {
        std::cout << nombre << " no se encuentra en la agenda.\n";
    }

    return 0;
}
