#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int contador = 0;

    cout << "Introduce números (0 para terminar): " << endl;

    cin >> numero;
    while (numero != 0) {
        suma += numero;
        contador++;
        cin >> numero;
    }

    if (contador > 0) {
        double media = static_cast<double>(suma) / contador;
        cout << "Suma: " << suma << "\nMedia: " << media << endl;
    } else {
        cout << "No se introdujeron números distintos de cero." << endl;
    }

    return 0;
}
