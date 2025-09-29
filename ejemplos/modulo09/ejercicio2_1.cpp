#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream archivo;

    try {
        archivo.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        archivo.open("datos.txt");

        std::string linea;
        while (std::getline(archivo, linea)) {
            std::cout << linea << '\n';
        }

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al abrir o leer el archivo: " << e.what() << '\n';
    }

    // Cierre automático por RAII
    return 0;
}
