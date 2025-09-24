#include <iostream>

int main() {
    double decimal {9.99};
    int entero {static_cast<int>(decimal)};  // Se pierde la parte decimal

    std::cout << entero << std::endl;  // Imprime: 9
    return 0;
}
