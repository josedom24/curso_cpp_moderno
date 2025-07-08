#include <iostream>
#include <string>

// Función que imprime cada carácter con su índice
void mostrarCaracteres(const std::string& frase) {
    for (size_t i = 0; i < frase.size(); ++i) {
        std::cout << "Posición " << i << ": '" << frase[i] << "'\n";
    }
}

int main() {
    std::string frase;

    std::cout << "Introduce una frase: ";
    std::getline(std::cin, frase);

    mostrarCaracteres(frase);

    return 0;
}
