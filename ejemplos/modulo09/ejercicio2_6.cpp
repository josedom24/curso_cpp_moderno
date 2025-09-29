#include <iostream>
#include <fstream>
#include <string>

int main() {
    try {
        std::fstream archivo;
        archivo.exceptions(std::fstream::badbit);  // Solo badbit lanza excepción
        archivo.open("archivo.txt", std::ios::in | std::ios::out);

        std::string linea;
        if (std::getline(archivo, linea)) {
            std::cout << "Primera línea: " << linea << '\n';
        } else if (!archivo.eof()) {
            std::cerr << "Error inesperado al leer la línea.\n";
        }

        archivo.clear();  // Limpiar posibles flags de error antes de escribir
        archivo << "\nNueva línea añadida.";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error durante lectura o escritura: " << e.what() << '\n';
    }
}
