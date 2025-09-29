#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    int x = -1; // declaración fuera del try (inicializamos con un valor por defecto)

    try {
        x = v.at(10); // Lanza una excepción (índice fuera de rango)
    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción capturada: " << e.what() << '\n';
    }

    // Uso de x fuera del try
    std::cout << "Valor de x: " << x << '\n';

    return 0;
}
