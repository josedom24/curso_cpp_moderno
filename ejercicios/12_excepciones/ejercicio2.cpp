#include <iostream>
#include <string>
#include <stdexcept> 

int main() {
    std::string entrada{};
    int numero{};
    bool exito{false}; // Indica si la conversión fue correcta

    std::cout << "Introduce un número entero: ";
    std::getline(std::cin, entrada); // Leemos toda la línea

    try {
        numero = std::stoi(entrada); // Intento de conversión
        exito = true;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepción: cadena no válida (" << e.what() << ")\n";
    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción: número fuera de rango (" << e.what() << ")\n";
    }

    std::cout << "Programa finalizado\n";
    if (exito) {
        std::cout << "Número convertido: " << numero << '\n';
    }

    return 0;
}
