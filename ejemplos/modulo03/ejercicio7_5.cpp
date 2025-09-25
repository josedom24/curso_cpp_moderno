#include <iostream>

int main() {
    int contador{1};  // Inicialización fuera del for, usando inicialización uniforme
    for (; contador <= 5;) {
        std::cout << contador << " ";
        contador++;
    }
    std::cout << std::endl;
    return 0;
}
