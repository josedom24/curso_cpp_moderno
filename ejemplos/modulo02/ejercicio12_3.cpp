#include <iostream>

enum class Estado { Inactivo = 1, Activo = 2, Suspendido = 3 };

int main() {
    // Pedir un valor numérico al usuario
    int valor;
    std::cout << "Ingresa un valor (1: Inactivo, 2: Activo, 3: Suspendido): ";
    std::cin >> valor;

    // Verificar si el valor ingresado es válido
    if (valor >= 1 && valor <= 3) {
        // Convertir el valor numérico al tipo enum class usando static_cast
        Estado e {static_cast<Estado>(valor)};

        // Imprimir el valor numérico del enum
        std::cout << "El valor numérico del estado es: " << static_cast<int>(e) << std::endl;
    } else {
        std::cout << "Valor no válido." << std::endl;
    }

    return 0;
}
