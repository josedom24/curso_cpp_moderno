#include <iostream>

int main() {
    for (;;) {  // Equivale a while (true)
        std::cout << "Ejecutando..." << std::endl;
        break;  // Salimos del bucle
    }
    return 0;
}
