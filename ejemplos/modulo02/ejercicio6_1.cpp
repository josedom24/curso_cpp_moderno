#include <iostream>
using namespace std;

int main() {
    // ----- Declaración de constantes -----
    const int edad {25};               // Entero constante
    const double pi {3.14159};         // Número real constante
    const char inicial {'A'};          // Carácter constante
    const bool esValido {true};        // Booleano constante

    // Mostramos los valores
    cout << "Edad: " << edad << endl;
    cout << "Pi: " << pi << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Es válido: " << esValido << endl;

    // Intentar modificar una constante provoca error de compilación
    // edad = 30; // Esto NO está permitido

    return 0;
}
