#include <iostream>

int main() {
    double sueldo_base {0.0};
    double venta1 {0.0};
    double venta2 {0.0};
    double venta3 {0.0};
    constexpr double porcentaje_comision {0.10};

    std::cout << "Introduce el sueldo base: ";
    std::cin >> sueldo_base;

    std::cout << "Introduce la venta 1: ";
    std::cin >> venta1;

    std::cout << "Introduce la venta 2: ";
    std::cin >> venta2;

    std::cout << "Introduce la venta 3: ";
    std::cin >> venta3;

    double total_ventas { venta1 + venta2 + venta3 };
    double comision { total_ventas * porcentaje_comision };
    double sueldo_total { sueldo_base + comision };

    std::cout << "Comisión total: " << comision << std::endl;
    std::cout << "Sueldo total a recibir: " << sueldo_total << std::endl;

    return 0;
}
