#include <iostream>

int main() {
    int contador{0};
    int numero{};

    for (int i = 1; i <= 5; i++) {
        std::cout << "Dime un número: ";
        std::cin >> numero;

        if (numero % 2 == 0) {
            contador++;
        }
    }

    std::cout << "Has introducido " << contador << " números pares." << std::endl;
    return 0;
}
