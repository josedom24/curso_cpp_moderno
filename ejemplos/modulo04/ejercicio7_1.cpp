#include <iostream>

// Función que calcula el cuadrado de un número
int cuadrado(int x) {
    return x * x;
}

int main() {
    int numero;

    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    int resultado = cuadrado(numero);  // Llamada a la función

    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;

    return 0;
}
