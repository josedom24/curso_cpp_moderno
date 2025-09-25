#include <iostream>
#include <string>

int main() {
    std::string texto{"Hola, mundo!"}; // inicialización uniforme
    char caracter{}; // inicialización uniforme a '\0'

    std::cout << "Texto: " << texto << "\n";
    std::cout << "Introduce el índice del carácter que quieres acceder: ";

    int indice{}; // inicialización uniforme
    std::cin >> indice;

    try {
        caracter = texto.at(indice); // acceso seguro
    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción capturada: " << e.what() << '\n';
    }

    std::cout << "Programa finalizado\n";
    if (caracter != '\0') {
        std::cout << "Carácter obtenido: " << caracter << '\n';
    }

    return 0;
}
