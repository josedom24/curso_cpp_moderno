#include <iostream>
#include <string>

void imprimirCadena(const std::string& texto) {
    std::cout << "Texto dentro de la función: " << texto << std::endl;
}

int main() {
    std::string original = "Hola Mundo";
    
    imprimirCadena(original);  // Se pasa por referencia constante

    return 0;
}
