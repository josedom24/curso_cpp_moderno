#include <iostream>

// Declaración y definición de la función
int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(3, 4); //Llamada a la función
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}
