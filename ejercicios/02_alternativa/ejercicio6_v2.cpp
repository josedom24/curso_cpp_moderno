#include <iostream>

int main() {
    int dado;

    std::cout << "Introduce un número del dado (1-6): ";
    std::cin >> dado;

    switch (dado) {
        case 1:
            std::cout << "En la cara opuesta está el \"seis\".\n";
            break;
        case 2:
            std::cout << "En la cara opuesta está el \"cinco\".\n";
            break;
        case 3:
            std::cout << "En la cara opuesta está el \"cuatro\".\n";
            break;
        case 4:
            std::cout << "En la cara opuesta está el \"tres\".\n";
            break;
        case 5:
            std::cout << "En la cara opuesta está el \"dos\".\n";
            break;
        case 6:
            std::cout << "En la cara opuesta está el \"uno\".\n";
            break;
        default:
            std::cout << "ERROR: número incorrecto.\n";
            break;
    }

    return 0;
}
