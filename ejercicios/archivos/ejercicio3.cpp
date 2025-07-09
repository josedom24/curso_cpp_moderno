#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::string origen, destino;
    std::cout << "Archivo de origen: ";
    std::getline(std::cin, origen);
    std::cout << "Archivo de destino: ";
    std::getline(std::cin, destino);

    try {
        // Leer archivo binario de origen
        std::ifstream archivoOrigen;
        archivoOrigen.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        archivoOrigen.open(origen, std::ios::binary);

        std::vector<char> buffer((std::istreambuf_iterator<char>(archivoOrigen)),
                                  std::istreambuf_iterator<char>());

        // Escribir en archivo de destino
        std::ofstream archivoDestino;
        archivoDestino.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        archivoDestino.open(destino, std::ios::binary);
        archivoDestino.write(buffer.data(), buffer.size());

        std::cout << "Archivo copiado exitosamente. Tamaño: " << buffer.size() << " bytes\n";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error durante la copia: " << e.what() << '\n';
    }

    return 0;
}
