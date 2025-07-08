#include <iostream>
#include <string>

// Función que añade un espacio tras cada carácter del texto
std::string ConvertirEspaciado(const std::string& texto) {
    std::string resultado;
    for (char c : texto) {
        resultado += c;
        resultado += ' ';
    }
    return resultado;
}

int main() {
    std::string texto;

    std::cout << "Introduce un texto: ";
    std::getline(std::cin, texto);

    std::string textoEspaciado = ConvertirEspaciado(texto);

    std::cout << "Texto con espacios añadidos: " << textoEspaciado << "\n";

    return 0;
}
