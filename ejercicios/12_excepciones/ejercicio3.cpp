#include <iostream>
#include <stdexcept> // Para std::domain_error
#include <cmath>     // Para std::sqrt

// Función que calcula la raíz cuadrada segura
double raiz_cuadrada(double x) {
    if (x < 0.0) {
        throw std::domain_error("No se puede calcular la raíz cuadrada de un número negativo");
    }
    return std::sqrt(x);
}

int main() {
    double numero{};
    double resultado{};
    bool exito{false}; // Indica si la operación fue exitosa

    std::cout << "Introduce un número: ";
    std::cin >> numero;

    try {
        resultado = raiz_cuadrada(numero);
        exito = true;
    } catch (const std::domain_error& e) {
        std::cerr << "Excepción capturada: " << e.what() << '\n';
    }

    std::cout << "Programa finalizado\n";
    if (exito) {
        std::cout << "Raíz cuadrada: " << resultado << '\n';
    }

    return 0;
}
