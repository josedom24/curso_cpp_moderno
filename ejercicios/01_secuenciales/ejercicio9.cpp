#include <iostream>

int main() {
    double total_compra {0.0};
    constexpr double descuento {0.15};

    std::cout << "Introduce el total de la compra: ";
    std::cin >> total_compra;

    auto monto_descuento = total_compra * descuento;
    auto total_final = total_compra - monto_descuento;

    std::cout << "Descuento aplicado: " << monto_descuento << std::endl;
    std::cout << "Total a pagar: " << total_final << std::endl;

    return 0;
}
