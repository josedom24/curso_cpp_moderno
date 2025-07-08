#include <iostream>
#include <string>

// Función que cuenta palabras separadas por espacios en una cadena
int contarPalabras(const std::string& frase) {
    int contador = 0;
    bool enPalabra = false;

    for (char c : frase) {
        if (c != ' ' && !enPalabra) {
            // Inicio de una palabra
            enPalabra = true;
            ++contador;
        } else if (c == ' ') {
            // Fin o separación entre palabras
            enPalabra = false;
        }
    }
    return contador;
}

int main() {
    std::string frase;

    std::cout << "Introduce una frase con varias palabras: ";
    std::getline(std::cin, frase);

    int numPalabras = contarPalabras(frase);

    std::cout << "La frase tiene " << numPalabras << " palabra(s)." << std::endl;

    return 0;
}
