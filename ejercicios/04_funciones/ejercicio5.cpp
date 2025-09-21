#include <iostream>
#include <vector>

// Función que devuelve el valor máximo en un vector
int CalcularMax(const std::vector<int>& valores) {
    if (valores.empty()) {
        std::cerr << "Error: vector vacío.\n";
        return 0; // O un valor por defecto adecuado
    }
    int max_val = valores[0];  // Inicializamos con el primer elemento
    for (int v : valores) {
        if (v > max_val) max_val = v;
    }
    return max_val;
}

// Función que devuelve el valor mínimo en un vector
int CalcularMin(const std::vector<int>& valores) {
    if (valores.empty()) {
        std::cerr << "Error: vector vacío.\n";
        return 0; // O un valor por defecto adecuado
    }
    int min_val = valores[0];  // Inicializamos con el primer elemento
    for (int v : valores) {
        if (v < min_val) min_val = v;
    }
    return min_val;
}

int main() {
    std::vector<int> numeros;
    int valor;

    std::cout << "Introduce números enteros (introduce -1 para terminar):\n";
    while (true) {
        std::cout << "Número: ";
        std::cin >> valor;
        if (valor == -1) break;
        numeros.push_back(valor);
    }

    if (numeros.empty()) {
        std::cout << "No se introdujeron números.\n";
    } else {
        int maximo = CalcularMax(numeros);
        int minimo = CalcularMin(numeros);
        std::cout << "Valor máximo: " << maximo << "\n";
        std::cout << "Valor mínimo: " << minimo << "\n";
    }

    return 0;
}
