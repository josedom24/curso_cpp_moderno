#include <iostream>

int main() {
    int entero {5};
    double decimal {2.5};

    double resultado {entero + decimal};

    std::cout << resultado << std::endl;  // Imprime: 7.5
    return 0;
}
