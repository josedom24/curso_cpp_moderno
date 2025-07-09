#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string nombreArchivo;
    std::cout << "Introduce el nombre del archivo a leer: ";
    std::getline(std::cin, nombreArchivo);

    try {
        std::ifstream archivo;
        archivo.exceptions(std::ifstream::badbit);  // Solo badbit lanza excepción
        archivo.open(nombreArchivo);

        std::string linea;
        while (std::getline(archivo, linea)) {
            std::cout << linea << '\n';
        }

        if (!archivo.eof()) {
            std::cerr << "Error inesperado durante la lectura del archivo.\n";
        }

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al abrir o leer el archivo: " << e.what() << '\n';
    }

    return 0;
}
