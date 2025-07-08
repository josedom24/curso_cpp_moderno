#include <iostream>
#include <string>
#include <cctype>  // para std::tolower

// Función que determina si una cadena es palíndromo, ignorando espacios y mayúsculas/minúsculas
bool esPalindromo(const std::string& texto) {
    int izquierda = 0;
    int derecha = static_cast<int>(texto.size()) - 1;

    while (izquierda < derecha) {
        // Ignorar espacios a la izquierda
        while (izquierda < derecha && texto[izquierda] == ' ') {
            ++izquierda;
        }
        // Ignorar espacios a la derecha
        while (derecha > izquierda && texto[derecha] == ' ') {
            --derecha;
        }

        // Comparar caracteres ignorando mayúsculas/minúsculas
        if (std::tolower(texto[izquierda]) != std::tolower(texto[derecha])) {
            return false;
        }
        ++izquierda;
        --derecha;
    }
    return true;
}

int main() {
    std::string frase;

    std::cout << "Introduce una palabra o frase: ";
    std::getline(std::cin, frase);

    if (esPalindromo(frase)) {
        std::cout << "Es un palíndromo." << std::endl;
    } else {
        std::cout << "No es un palíndromo." << std::endl;
    }

    return 0;
}
