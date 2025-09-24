#include <iostream>

enum class Estado { Inactivo = 1, Activo = 2, Suspendido = 3 };

int main() {
    Estado e {Estado::Activo};

    std::cout << "Valor numérico: " << static_cast<int>(e) << std::endl;

    return 0;
}
