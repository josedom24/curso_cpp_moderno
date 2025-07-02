#include <iostream>
#include <cmath>  // para sqrt
using namespace std;

int main() {
    int num;
    bool esPrimo = true;

    cout << "Introduce un número entero positivo: ";
    cin >> num;

    if (num < 2) {
        esPrimo = false;  // 0 y 1 no son primos
    } else {
        int limite = static_cast<int>(sqrt(num));  // límite para comprobación

        for (int i = 2; i <= limite; ++i) {
            if (num % i == 0) {
                esPrimo = false;
                break;  // No hace falta seguir comprobando
            }
        }
    }

    if (esPrimo) {
        cout << num << " es un número primo." << endl;
    } else {
        cout << num << " no es un número primo." << endl;
    }

    return 0;
}
