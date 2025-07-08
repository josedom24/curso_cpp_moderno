#include <iostream>
#include <vector>

// Función para calcular el promedio de un vector de números reales
double CalcularPromedio(const std::vector<double>& valores) {
    if (valores.empty()) return 0.0;

    double suma = 0.0;
    for (double v : valores) {
        suma += v;
    }
    return suma / valores.size();
}

int main() {
    std::vector<double> numeros;
    double entrada;

    std::cout << "Introduce números reales (negativo para terminar):\n";
    while (true) {
        std::cout << "> ";
        std::cin >> entrada;
        if (entrada < 0) break;
        numeros.push_back(entrada);
    }

    if (numeros.empty()) {
        std::cout << "No se introdujeron números válidos.\n";
    } else {
        double promedio = CalcularPromedio(numeros);
        std::cout << "El promedio es: " << promedio << std::endl;
    }

    return 0;
}
