#include <iostream>
#include <string>

// Función que invierte una cadena y devuelve la nueva cadena invertida
std::string invertirCadena(const std::string& original) {
    std::string invertida;
    // Recorrer desde el final hasta el principio
    for (int i = static_cast<int>(original.size()) - 1; i >= 0; --i) {
        invertida += original[i];
    }
    return invertida;
}

int main() {
    std::string texto;

    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, texto);

    std::string textoInvertido = invertirCadena(texto);

    std::cout << "Cadena invertida: " << textoInvertido << std::endl;

    return 0;
}
