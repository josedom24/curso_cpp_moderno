#include <iostream>

int global = 10;  // Variable global

void mostrarGlobal() {
    std::cout << "El valor de la variable global es: " << global << std::endl;
}

int main() {
    mostrarGlobal();  // Imprime el valor actual de 'global'

    global = 20;  // Modificamos el valor de la variable global

    mostrarGlobal();  // Imprime el nuevo valor de 'global'

    return 0;
}
