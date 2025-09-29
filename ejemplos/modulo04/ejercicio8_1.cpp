#include <iostream>

// Función constexpr que calcula el doble de un número
constexpr int doble(int x) {
    return x * 2;
}

int main() {
    constexpr int resultado = doble(4); // Se calcula en tiempo de compilación
    std::cout << "El doble de 4 es: " << resultado << std::endl;

    int numero = 5;
    std::cout << "El doble de 5 es: " << doble(numero) << std::endl; // Evaluación en tiempo de ejecución

    return 0;
}
