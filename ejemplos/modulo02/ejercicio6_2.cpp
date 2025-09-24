#include <iostream>
using namespace std;

int main() {
    // ----- Declaración de constantes en tiempo de compilación -----
    constexpr int tamaño {10};      // Entero constante conocido en tiempo de compilación
    constexpr double radio {2.5};   // Número real constante en tiempo de compilación
    constexpr char letra {'B'};     // Carácter constante en tiempo de compilación

    // Uso de la constante para declarar un array
    int array[tamaño];               // Tamaño conocido en tiempo de compilación

    // Mostramos los valores
    cout << "Tamaño del array: " << tamaño << endl;
    cout << "Radio: " << radio << endl;
    cout << "Letra: " << letra << endl;

    return 0;
}
