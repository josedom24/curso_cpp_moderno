#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introduce un número para mostrar su tabla de multiplicar: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << '\n';
    }

    return 0;
}
