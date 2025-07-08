#include <iostream>
#include <map>
#include <string>

void mostrarEdades(const std::map<std::string, int>& edades) {
    for (const auto& [nombre, edad] : edades) {
        std::cout << nombre << " tiene " << edad << " años.\n";
    }
}

int main() {
    std::map<std::string, int> edades;
    std::string nombre;
    int edad;

    std::cout << "Introduce nombres y edades (escribe 'fin' como nombre para terminar):\n";
    while (true) {
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        if (nombre == "fin") break;

        std::cout << "Edad: ";
        std::cin >> edad;
        std::cin.ignore(); // limpiar salto de línea

        edades[nombre] = edad;
    }

    std::cout << "\nListado de edades:\n";
    mostrarEdades(edades);

    return 0;
}
