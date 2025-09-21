#include <iostream>

// Función que devuelve true si 'a' es múltiplo de 'b'
bool EsMultiplo(int a, int b) {
    if (b == 0) return false; // Evitar división por cero
    return (a % b == 0);
}

int main() {
    int num1, num2;

    std::cout << "Introduce el primer número entero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo número entero: ";
    std::cin >> num2;

    if (EsMultiplo(num1, num2)) {
        std::cout << num1 << " es múltiplo de " << num2 << ".\n";
    } else if (EsMultiplo(num2, num1)) {
        std::cout << num2 << " es múltiplo de " << num1 << ".\n";
    } else {
        std::cout << "Ninguno de los números es múltiplo del otro.\n";
    }

    return 0;
}
