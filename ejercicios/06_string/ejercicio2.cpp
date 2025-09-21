#include <iostream>
#include <string>

// Función que cuenta ocurrencias de un carácter en una cadena
int contarCaracter(const std::string& texto, char caracter) {
    int contador = 0;
    for (char c : texto) {
        if (c == caracter) {
            ++contador;
        }
    }
    return contador;
}

int main() {
    std::string texto;
    std::string entradaCaracter;
    char caracter;

    // Pedir cadena
    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, texto);

    // Pedir y validar que sea un solo carácter
    do {
        std::cout << "Introduce un único carácter: ";
        std::getline(std::cin, entradaCaracter);
        if (entradaCaracter.size() != 1) {
            std::cout << "Error: Debes introducir exactamente un carácter.\n";
        }
    } while (entradaCaracter.size() != 1);

    caracter = entradaCaracter[0];

    // Contar y mostrar resultado
    int veces = contarCaracter(texto, caracter);
    std::cout << "El carácter '" << caracter << "' aparece " << veces << " veces en la cadena.\n";

    return 0;
}
