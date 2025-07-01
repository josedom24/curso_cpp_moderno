#include <iostream>

int main() {
    int minutos_totales {0};
    constexpr int minutos_por_hora {60};

    std::cout << "Introduce la cantidad de minutos: ";
    std::cin >> minutos_totales;

    int horas { minutos_totales / minutos_por_hora };
    int minutos_restantes { minutos_totales % minutos_por_hora };

    std::cout << minutos_totales << " minutos son " << horas << " horas y " << minutos_restantes << " minutos." << std::endl;

    return 0;
}
