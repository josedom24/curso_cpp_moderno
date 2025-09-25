#include <iostream>

int main() {
    int contador{0};

    while (contador < 10) {
        contador++;

        if (contador % 2 != 0) {
            continue;  // Saltamos los números impares
        }

        std::cout << contador << " ";
    }

    std::cout << "\n";
    return 0;
}
