#include <iostream>
#include <string>

int main() {
    std::string texto1 {"123"};
    std::string texto2 {"3.1416"};

    int numero {std::stoi(texto1)};
    double decimal {std::stod(texto2)};

    std::cout << "Texto como número entero: " << numero << std::endl;
    std::cout << "Texto como número decimal: " << decimal << std::endl;

    std::string texto {"abc"};
    //int numero {std::stoi(texto)};  // ERROR en tiempo de ejecución

    return 0;
}
