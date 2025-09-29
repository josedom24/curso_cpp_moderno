#include <iostream>
#include <stdexcept> // Incluye excepciones estándar

int dividir(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("División por cero");
    }
    return a / b;
}

int main() {
    try {
        int resultado = dividir(10, 0);
        std::cout << "Resultado: " << resultado << '\n';
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    std::cout << "Programa terminado correctamente\n";
    return 0;
}
