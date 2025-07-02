#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Introduce el primer número: ";
    std::cin >> a;
    std::cout << "Introduce el segundo número: ";
    std::cin >> b;
    std::cout << "Introduce el tercer número: ";
    std::cin >> c;

    // Combinamos condiciones para mostrar los números de mayor a menor
    if (a >= b && a >= c) {
        if (b >= c)
            std::cout << a << " " << b << " " << c << "\n";
        else
            std::cout << a << " " << c << " " << b << "\n";
    } else if (b >= a && b >= c) {
        if (a >= c)
            std::cout << b << " " << a << " " << c << "\n";
        else
            std::cout << b << " " << c << " " << a << "\n";
    } else {  // c es el mayor
        if (a >= b)
            std::cout << c << " " << a << " " << b << "\n";
        else
            std::cout << c << " " << b << " " << a << "\n";
    }

    return 0;
}