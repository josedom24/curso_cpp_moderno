#include <iostream>
#include <fstream>
#include <vector>

int main() {
    try {
        std::ifstream archivo;
        archivo.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        archivo.open("imagen.jpg", std::ios::binary);

        std::vector<char> buffer((std::istreambuf_iterator<char>(archivo)),
                                  std::istreambuf_iterator<char>());

        std::cout << "Tamaño de archivo: " << buffer.size() << " bytes\n";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al leer archivo binario: " << e.what() << '\n';
    }
}
