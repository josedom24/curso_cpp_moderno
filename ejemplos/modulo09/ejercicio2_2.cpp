#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream archivo;

    try {
        archivo.exceptions(std::ifstream::badbit);  // Solo badbit lanza excepciones
        archivo.open("datos.txt");

        std::string linea;
        while (std::getline(archivo, linea)) {
            std::cout << linea << '\n';
        }

        if (!archivo.eof()) {
            // Si no es fin de archivo, hubo un error inesperado
            std::cerr << "Error: la lectura terminó inesperadamente.\n";
        }

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al abrir o leer el archivo: " << e.what() << '\n';
    }

    // Cierre automático por RAII al salir del scope
}
