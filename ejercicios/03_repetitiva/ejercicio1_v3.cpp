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

    if (n == 0) {
        cout << "0! = 1" << endl;
        return 0;
    }

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= n);

    cout << n << "! = " << factorial << endl;

    return 0;
}
