#include <iostream>
#include <cassert>

// Función recursiva para calcular el factorial
int factorial(int n) {
    assert(n >= 0); // Comprobación: no se permite n negativo
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
    std::cout << "Prueba de factorial:\n";

    // Casos de prueba
    std::cout << "factorial(0) = " << factorial(0) << "\n"; // 1
    std::cout << "factorial(1) = " << factorial(1) << "\n"; // 1
    std::cout << "factorial(5) = " << factorial(5) << "\n"; // 120
    std::cout << "factorial(10) = " << factorial(10) << "\n"; // 3628800

    // Si descomentas la siguiente línea, el programa abortará debido al assert
    // std::cout << factorial(-3) << "\n";

    return 0;
}
