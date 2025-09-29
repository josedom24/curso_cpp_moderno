#include <iostream>
#include <string>


// Valor por defecto en la declaración
void saludar(std::string nombre = "Usuario");  

int main() {
    saludar("Carlos"); // Imprime: Hola, Carlos
    saludar();         // Imprime: Hola, Usuario
    return 0;
}

// Definición sin repetir el valor por defecto
void saludar(std::string nombre) {
    std::cout << "Hola, " << nombre << std::endl;
}
