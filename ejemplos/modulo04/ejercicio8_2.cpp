#include <iostream>

// Función inline que suma dos números
inline int sumar(int a, int b) {
    return a + b;
}

int main() {
    int x = 3, y = 7;
    std::cout << "La suma es: " << sumar(x, y) << std::endl;
    return 0;
}
