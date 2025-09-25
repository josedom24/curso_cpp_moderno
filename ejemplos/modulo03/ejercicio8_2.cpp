#include <iostream>

int main() {
    int suma{0};
    int numero{};

    for (int i = 1; i <= 5; i++) {
        std::cout << "Dime un número: ";
        std::cin >> numero;

        if (numero % 2 == 0) {
            suma += numero;
        }
    }

    std::cout << "La suma de los números pares es " << suma << std::endl;
    return 0;
}
