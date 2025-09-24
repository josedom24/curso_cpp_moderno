#include <iostream>

int main() {
    double decimal {3.75};

    int entero {static_cast<int>(decimal)};  // Conversión explícita en inicialización uniforme

    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Entero: " << entero << std::endl;

    entero = entero + static_cast<int>(1.0);  // Conversión explícita en asignación
    std::cout << "Entero modificado: " << entero << std::endl;
    return 0;
}
