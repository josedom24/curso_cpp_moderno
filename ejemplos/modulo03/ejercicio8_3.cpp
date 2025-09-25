#include <iostream>

int main() {
    bool hay_par{false};
    int numero{};

    for (int i = 1; i <= 5; i++) {
        std::cout << "Dime un número: ";
        std::cin >> numero;

        if (numero % 2 == 0) {
            hay_par = true;
        }
    }

    if (hay_par) {
        std::cout << "Has introducido al menos un número par." << std::endl;
    } else {
        std::cout << "No has introducido ningún número par." << std::endl;
    }

    return 0;
}
