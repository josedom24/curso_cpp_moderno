#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string nombreArchivo;
    std::cout << "Introduce el nombre del archivo donde escribir: ";
    std::getline(std::cin, nombreArchivo);

    try {
        std::ofstream archivo;
        archivo.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        archivo.open(nombreArchivo, std::ios::trunc);

        std::cout << "Escribe líneas de texto (una línea vacía para terminar):\n";

        std::string linea;
        while (true) {
            std::getline(std::cin, linea);
            if (linea.empty()) break;
            archivo << linea << '\n';
        }

        std::cout << "Archivo guardado con éxito.\n";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al escribir en el archivo: " << e.what() << '\n';
    }

    return 0;
}
