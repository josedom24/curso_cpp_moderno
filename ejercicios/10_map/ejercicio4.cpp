#include <iostream>
#include <map>
#include <string>
#include <cctype>

int main() {
    std::string frase;
    std::map<std::string, int> conteo;

    std::cout << "Introduce una frase: ";
    std::getline(std::cin, frase);

    std::string palabra;
    for (char c : frase) {
        if (std::isspace(c)) {
            if (!palabra.empty()) {
                ++conteo[palabra];
                palabra.clear();
            }
        } else {
            palabra += c;
        }
    }

    // Añadir la última palabra si la hay
    if (!palabra.empty()) {
        ++conteo[palabra];
    }

    std::cout << "\nApariciones de palabras:\n";
    for (const auto& [palabra, cantidad] : conteo) {
        std::cout << palabra << ": " << cantidad << "\n";
    }

    return 0;
}
