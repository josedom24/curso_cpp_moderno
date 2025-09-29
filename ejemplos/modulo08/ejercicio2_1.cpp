#include <iostream>

int main() {
    int edad = -5;
    if (edad < 0) {
        std::cerr << "Error: la edad no puede ser negativa.\n";
    }
    return 0;
}
