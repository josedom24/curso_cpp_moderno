#include <iostream>

//Prototipo de la función
int suma(int a, int b);

int main() {
    int resultado = suma(3, 4);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}

// Declaración y definición de la función
int suma(int a, int b) {
    return a + b;
}
