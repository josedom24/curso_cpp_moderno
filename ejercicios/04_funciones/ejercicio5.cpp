#include <iostream>
#include <string>

// Función que devuelve la palabra lexicográficamente mayor
std::string CalcularMax(const std::string& palabra_actual, const std::string& max_actual) {
    if (max_actual.empty() || palabra_actual > max_actual) {
        return palabra_actual;
    }
    return max_actual;
}

// Función que devuelve la palabra lexicográficamente menor
std::string CalcularMin(const std::string& palabra_actual, const std::string& min_actual) {
    if (min_actual.empty() || palabra_actual < min_actual) {
        return palabra_actual;
    }
    return min_actual;
}

int main() {
    std::string entrada;
    std::string max_palabra;
    std::string min_palabra;

    std::cout << "Introduce palabras (escribe 'fin' para terminar):" << std::endl;

    while (true) {
        std::cin >> entrada;
        if (entrada == "fin") break;

        max_palabra = CalcularMax(entrada, max_palabra);
        min_palabra = CalcularMin(entrada, min_palabra);
    }

    if (!max_palabra.empty()) {
        std::cout << "Palabra máxima: " << max_palabra << std::endl;
        std::cout << "Palabra mínima: " << min_palabra << std::endl;
    } else {
        std::cout << "No se introdujeron palabras." << std::endl;
    }

    return 0;
}
