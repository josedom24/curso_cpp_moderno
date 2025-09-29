#include <iostream>
#include <fstream>
#include <string>

int main() {
    try {
        std::ifstream archivo;
        archivo.exceptions(std::ifstream::badbit);  // Solo badbit lanza excepción
        archivo.open("palabras.txt");

        std::string palabra;
        while (archivo >> palabra) {
            std::cout << "Leído: " << palabra << '\n';
        }

        if (!archivo.eof()) {
            // Si no es fin de archivo, ocurrió un error inesperado
            std::cerr << "Error: la lectura terminó inesperadamente.\n";
        }

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error durante la lectura: " << e.what() << '\n';
    }
}
