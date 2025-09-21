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

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
