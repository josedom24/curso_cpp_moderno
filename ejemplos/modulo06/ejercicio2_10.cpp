#include <iostream>
#include <string>

void modificarCadena(std::string* texto) {
    if (texto != nullptr) {
        std::cout << "Texto antes de la modificación: " << *texto << std::endl;
        *texto = "Texto modificado";
        std::cout << "Texto después de la modificación: " << *texto << std::endl;
    }
}

int main() {
    std::string original = "Hola Mundo";
    
    modificarCadena(&original);  // Se pasa por puntero

    std::cout << "Texto después de la función: " << original << std::endl;  // Ha cambiado

    return 0;
}
