#include <iostream>
using namespace std;

int main() {
    int limiteInferior, limiteSuperior;

    do {
        cout << "Introduce el límite inferior: ";
        cin >> limiteInferior;
        cout << "Introduce el límite superior: ";
        cin >> limiteSuperior;

        if (limiteInferior > limiteSuperior) {
            cout << "El límite inferior no puede ser mayor que el superior. Inténtalo de nuevo.\n";
        }
    } while (limiteInferior > limiteSuperior);

    int numero;
    int sumaDentro = 0;
    int fueraIntervalo = 0;
    bool limiteIgualIntroducido = false;

    cout << "Introduce números (0 para terminar):\n";

    do {
        cin >> numero;

        if (numero == 0) break;

        if (numero > limiteInferior && numero < limiteSuperior) {
            sumaDentro += numero;
        } else {
            fueraIntervalo++;
        }

        if (numero == limiteInferior || numero == limiteSuperior) {
            limiteIgualIntroducido = true;
        }

    } while (numero != 0);

    cout << "Suma de números dentro del intervalo (excluyendo límites): " << sumaDentro << '\n';
    cout << "Cantidad de números fuera del intervalo: " << fueraIntervalo << '\n';

    if (limiteIgualIntroducido) {
        cout << "Se introdujo al menos un número igual a uno de los límites del intervalo.\n";
    } else {
        cout << "No se introdujo ningún número igual a los límites del intervalo.\n";
    }

    return 0;
}
