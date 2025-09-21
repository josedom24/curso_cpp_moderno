#include <iostream>
using namespace std;

int main() {
    const int meses = 20;
    double pago = 10.0;
    double total = 0.0;

    for (int i = 1; i <= meses; ++i) {
        cout << "Mes " << i << ": " << pago << " €" << endl;
        total += pago;
        pago *= 2;  // El pago se duplica cada mes
    }

    cout << "Total pagado en " << meses << " meses: " << total << " €" << endl;

    return 0;
}
