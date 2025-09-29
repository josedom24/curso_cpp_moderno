#include <iostream>

int main() {
    int valor = 4;
    std::cout << [](int n) { return n * 3; }(valor) << std::endl;  // Imprime 8
    return 0;
}
