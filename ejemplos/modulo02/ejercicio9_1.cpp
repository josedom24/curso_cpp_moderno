#include <iostream>
#include <string>

int main() {
    int numero {42};
    double decimal {3.14};

    std::string texto1 {std::to_string(numero)};
    std::string texto2 {std::to_string(decimal)};

    std::cout << "Número como texto: " << texto1 << std::endl;
    std::cout << "Decimal como texto: " << texto2 << std::endl;

    return 0;
}
