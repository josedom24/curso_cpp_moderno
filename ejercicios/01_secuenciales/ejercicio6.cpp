#include <iostream>

int main() {
    int num1 {0};
    int num2 {0};
    int num3 {0};

    constexpr int cantidad_numeros {3};

    std::cout << "Introduce el primer número entero: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número entero: ";
    std::cin >> num2;

    std::cout << "Introduce el tercer número entero: ";
    std::cin >> num3;

    // Declaramos la variable suma con decltype, que será int
    decltype(num1 + num2 + num3) suma { num1 + num2 + num3 };

    // Ahora hacemos la media con conversión a double para evitar división entera
    double media { static_cast<double>(suma) / cantidad_numeros };

    std::cout << "La media es: " << media << std::endl;

    return 0;
}
