#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Abrimos el archivo
    std::ifstream archivo("archivo.txt");
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir archivo\n";
        return 1; // Salida temprana si no se puede abrir
    }

    int numero{};
    archivo >> numero; // Intentamos leer un número

    if (archivo.fail()) {
        std::cerr << "Error al leer el número\n";
        return 1; // Salida si la lectura falla
    }

    // Si todo va bien, mostramos el número leído
    std::cout << "Número leído: " << numero << '\n';

    // Cierre automático al salir del bloque
    std::cout << "Programa finalizado\n";

    return 0;
}
