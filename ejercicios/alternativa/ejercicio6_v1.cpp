#include <iostream>
#include <string>

int main() {
    int dado;

    std::cout << "Introduce un número del dado (1-6): ";
    std::cin >> dado;

    // Mostrar la cara opuesta usando if-else
    if (dado == 1) {
        std::cout << "En la cara opuesta está el \"seis\".\n";
    } else if (dado == 2) {
        std::cout << "En la cara opuesta está el \"cinco\".\n";
    } else if (dado == 3) {
        std::cout << "En la cara opuesta está el \"cuatro\".\n";
    } else if (dado == 4) {
        std::cout << "En la cara opuesta está el \"tres\".\n";
    } else if (dado == 5) {
        std::cout << "En la cara opuesta está el \"dos\".\n";
    } else if (dado == 6) {
        std::cout << "En la cara opuesta está el \"uno\".\n";
    } else {
        std::cout << "ERROR: número incorrecto.\n";
    }

    return 0;
}
