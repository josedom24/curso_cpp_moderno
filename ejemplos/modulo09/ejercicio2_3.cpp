#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream archivo;

    try {
        archivo.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        archivo.open("salida.txt"); // Crea el archivo o lo sobreescribe

        archivo << "Primera línea\n";
        archivo << "Segunda línea\n";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al abrir o escribir en el archivo: " << e.what() << '\n';
    }
}
