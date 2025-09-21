#include <iostream>

// Función que calcula el promedio a partir de la suma y la cantidad de números
double CalcularPromedio(double suma, int cantidad) {
    if (cantidad == 0) return 0.0; // Evitar división por cero
    return suma / cantidad;
}

int main() {
    double numero;
    double suma = 0.0;
    int contador = 0;

    std::cout << "Introduce números reales (negativo para terminar):" << std::endl;

    while (true) {
        std::cin >> numero;
        if (numero < 0) break; // Terminamos si el número es negativo
        suma += numero;
        ++contador;
    }

    if (contador > 0) {
        double promedio = CalcularPromedio(suma, contador);
        std::cout << "El promedio es: " << promedio << std::endl;
    } else {
        std::cout << "No se introdujeron números válidos." << std::endl;
    }

    return 0;
}
