#include <iostream>

void mostrar(const std::string& texto) {
    std::cout << texto << std::endl;
}

int main() {
    std::string mensaje = "¡Hola desde la función mostrar!";
    mostrar(mensaje);  // Llamada a la función con una variable

    // También se puede llamar directamente con un literal:
    mostrar("Este es otro mensaje.");

    return 0;
}
