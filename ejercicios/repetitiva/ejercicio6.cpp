#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Pedir los números y validar que num1 <= num2
    do {
        cout << "Introduce el primer número entero: ";
        cin >> num1;
        cout << "Introduce el segundo número entero: ";
        cin >> num2;

        if (num1 > num2) {
            cout << "El primer número debe ser menor o igual que el segundo. Inténtalo de nuevo.\n";
        }
    } while (num1 > num2);

    cout << "Números pares entre " << num1 << " y " << num2 << ":\n";

    for (int i = num1; i <= num2; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << '\n';

    return 0;
}
