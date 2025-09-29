#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string texto {"Hola Mundo"};

    for (char& c : texto) {
        c = std::toupper(c);  // Convierte cada carácter a mayúscula
    }

    std::cout << texto << std::endl;  // Salida: "HOLA MUNDO"

    return 0;
}
