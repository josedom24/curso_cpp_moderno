#include <iostream>

// Función inline que calcula la media de dos valores double
inline double CalcularMedia(double max, double min) {
    return (max + min) / 2.0;
}

int main() {
    int numDias;
    std::cout << "Introduce el número de días: ";
    std::cin >> numDias;

    for (int i = 1; i <= numDias; ++i) {
        double tempMax, tempMin;
        std::cout << "Día " << i << " - Temperatura máxima: ";
        std::cin >> tempMax;
        std::cout << "Día " << i << " - Temperatura mínima: ";
        std::cin >> tempMin;

        double media = CalcularMedia(tempMax, tempMin);
        std::cout << "Temperatura media del día " << i << ": " << media << "\n";
    }

    return 0;
}
