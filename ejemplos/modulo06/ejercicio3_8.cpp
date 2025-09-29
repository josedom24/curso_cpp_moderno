#include <iostream>
#include <array>

int main() {
    // Definir una tabla de 3 filas por 4 columnas con valores iniciales
    std::array<std::array<int, 4>, 3> tabla {{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    }};

    //Mostrar un elemento
    std::cout << tabla[1][2] << std::endl; // Imprime 7
    std::cout << tabla.at(1).at(2) << std::endl; // También imprime 7

    // Recorrer la tabla fila por fila
    for (const auto& fila : tabla) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }

    // Recorrer la tabla usando índices
    for (size_t i = 0; i < tabla.size(); ++i) {           // fila
        for (size_t j = 0; j < tabla[i].size(); ++j) {    // columna
            std::cout << tabla.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
