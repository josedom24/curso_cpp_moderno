#include <iostream>
#include <cstdlib>  // Para srand, rand
#include <ctime>    // Para time
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Inicializar semilla aleatoria
    int numeroSecreto = rand() % 100 + 1;  // Número entre 1 y 100
    int intento;
    int intentosRestantes = 10;
    int intentosUsados = 0;
    bool acertado = false;

    cout << "Adivina el número (entre 1 y 100). Tienes 10 intentos.\n";

    do {
        cout << "Introduce un número: ";
        cin >> intento;
        intentosUsados++;
        intentosRestantes--;

        if (intento == numeroSecreto) {
            cout << "¡Correcto! Has acertado en " << intentosUsados << " intentos.\n";
            acertado = true;
            break;
        } else if (intento < numeroSecreto) {
            cout << "El número es mayor. ";
        } else {
            cout << "El número es menor. ";
        }

        cout << "Intentos restantes: " << intentosRestantes << "\n";

    } while (intentosRestantes > 0);

    if (!acertado) {
        cout << "Lo siento, no has acertado. El número era: " << numeroSecreto << endl;
    }

    return 0;
}
