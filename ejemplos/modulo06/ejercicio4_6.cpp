#include <iostream>
#include <vector>

// Función que muestra el contenido de un std::vector
void mostrar(const std::vector<int>& vec) {
    for (int n : vec) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Inicialización uniforme del vector
    std::vector<int> datos {10, 20, 30, 40, 50};

    // Llamada a la función mostrar
    mostrar(datos);

    return 0;
}
