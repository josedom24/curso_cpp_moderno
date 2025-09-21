#include <iostream>

int CalcularMCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return CalcularMCD(b, a % b);
}

int main() {
    int num1, num2;

    std::cout << "Introduce dos números enteros: ";
    std::cin >> num1 >> num2;

    // Asegurar que los números sean positivos para el MCD
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int resultado = CalcularMCD(num1, num2);

    std::cout << "El máximo común divisor es: " << resultado << std::endl;

    return 0;
}
