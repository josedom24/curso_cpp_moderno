#include <iostream>
#include <string>

void imprimirCadena(std::string texto) {
    std::cout << "Texto dentro de la función: " << texto << std::endl;
    texto = "Texto modificado";
    std::cout << "Texto modificado dentro de la función: " << texto << std::endl;
}

int main() {
    std::string original = "Hola Mundo";
    
    imprimirCadena(original);  // Se pasa por valor

    std::cout << "Texto después de la función: " << original << std::endl;  // No ha cambiado

    return 0;
}
