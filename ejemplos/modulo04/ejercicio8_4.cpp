#include <iostream>

// Función recursiva que calcula el factorial de un número
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero = 5;
    std::cout << "El factorial de " << numero << " es: " << factorial(numero) << std::endl;
    return 0;
}
