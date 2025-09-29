#include <iostream>

// Función sin parámetros
void mostrarContador() {
    // Variable local: solo existe dentro de esta función
    int contador = 0;  

    // Cada vez que se llama a la función, se crea de nuevo
    contador++;

    std::cout << "Valor del contador local: " << contador << std::endl;
}

int main() {
    // Llamamos varias veces a la misma función
    mostrarContador(); // Imprime 1
    mostrarContador(); // Imprime 1 otra vez (porque la variable se reinicia)
    mostrarContador(); // Imprime 1 otra vez

    return 0;
}
