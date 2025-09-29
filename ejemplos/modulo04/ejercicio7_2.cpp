#include <iostream>

// Variable global
int global = 10;

// Función que devuelve una referencia a la variable global
int& obtenerGlobal() {
    return global;
}

int main() {
    std::cout << "Valor inicial de global: " << global << std::endl;

    // Modificamos el valor de global a través de la referencia devuelta
    obtenerGlobal() = 42;

    std::cout << "Valor de global después de modificarlo: " << global << std::endl;

    return 0;
}
