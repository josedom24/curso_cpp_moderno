#include <fstream>
#include <iostream>

int main() {
    std::ifstream archivo;
    archivo.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try {
        archivo.open("inexistente.txt");
        std::string linea;
        std::getline(archivo, linea);
        std::cout << linea << '\n';
    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al trabajar con archivos: " << e.what() << '\n';
    }
    return 0;
}
