#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Introduce un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: El número debe ser positivo." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        factorial *= i;  // Acumulamos el producto
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
