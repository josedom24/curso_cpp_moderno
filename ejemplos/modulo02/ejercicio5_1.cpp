#include <iostream>

// Variable global:
// - Ámbito: accesible desde cualquier función del programa.
// - Duración: existe durante toda la ejecución del programa.
int contadorGlobal = 0;

int main() {
    // Variable local:
    // - Ámbito: solo es accesible dentro de la función main.
    // - Duración: se crea al entrar en main y se destruye al salir de main.
    int contadorLocal = 0;

    std::cout << "Valor inicial de contadorGlobal: " << contadorGlobal << '\n';
    std::cout << "Valor inicial de contadorLocal: " << contadorLocal << '\n';

    // Modificamos ambas variables
    contadorGlobal += 5;
    contadorLocal += 5;

    std::cout << "Valor modificado de contadorGlobal: " << contadorGlobal << '\n';
    std::cout << "Valor modificado de contadorLocal: " << contadorLocal << '\n';

    return 0;
}
