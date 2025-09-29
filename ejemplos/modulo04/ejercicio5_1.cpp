#include <iostream>

void saludar(std::string nombre) { // 'nombre' es un parámetro
    std::cout << "Hola, " << nombre << std::endl;
}

int main() {
    saludar("Carlos"); // "Carlos" es el argumento
    return 0;
}
