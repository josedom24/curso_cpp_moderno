#include <iostream>

// Función sin parámetros
void mostrarContador() {
    // Variable estática local:
    // - Solo accesible dentro de esta función
    // - Persiste durante toda la ejecución del programa
    static int contador = 0;  

    contador++; // Incrementa su valor acumulado

    std::cout << "Valor del contador estático: " << contador << std::endl;
}

int main() {
    mostrarContador(); // Imprime 1
    mostrarContador(); // Imprime 2
    mostrarContador(); // Imprime 3

    return 0;
}
