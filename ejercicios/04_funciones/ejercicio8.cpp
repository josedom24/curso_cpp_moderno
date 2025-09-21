#include <iostream>

// Función constexpr recursiva para calcular potencias
constexpr int Potencia(int base, unsigned int exponente) {
    return (exponente == 0) ? 1 : base * Potencia(base, exponente - 1);
}

int main() {
    // Evaluación en tiempo de compilación
    constexpr int resultado_compilacion = Potencia(2, 5); // 2^5 = 32
    static_assert(resultado_compilacion == 32, "Error en potencia en tiempo de compilación");

    std::cout << "Potencia(3, 4) = " << Potencia(3, 4) << '\n'; // 81 en tiempo de ejecución
    std::cout << "Potencia(5, 0) = " << Potencia(5, 0) << '\n'; // 1 en tiempo de ejecución
    std::cout << "Potencia(2, 10) = " << Potencia(2, 10) << '\n'; // 1024

    return 0;
}
