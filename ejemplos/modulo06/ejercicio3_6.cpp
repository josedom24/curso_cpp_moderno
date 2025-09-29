#include <iostream>
#include <array>

// Función que muestra el contenido de un std::array
void mostrar(const std::array<int, 5>& arr) {
    for (int n : arr) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Inicialización uniforme del array
    std::array<int, 5> datos{10, 20, 30, 40, 50};

    // Llamada a la función mostrar
    mostrar(datos);

    return 0;
}
