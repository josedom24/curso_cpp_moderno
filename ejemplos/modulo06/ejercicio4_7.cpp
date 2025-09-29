#include <iostream>
#include <vector>

// Función que modifica y muestra un std::vector
void modificarYMostrar(std::vector<int>& vec) {
    for (int& n : vec) {
        n *= 2; // Duplicar cada valor
    }

    for (int n : vec) {
        std::cout << n << " "; // Mostrar el resultado
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> datos {1, 2, 3, 4, 5};

    modificarYMostrar(datos);

    return 0;
}
