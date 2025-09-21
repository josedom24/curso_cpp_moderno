#include <iostream>

int main() {
    int num;

    std::cout << "Introduce un número entero: ";
    std::cin >> num;

    // Usamos el operador módulo (%) para comprobar si el número es par o impar
    if (num % 2 == 0) {
        std::cout << "El número es par.\n";
    } else {
        std::cout << "El número es impar.\n";
    }

    return 0;
}
