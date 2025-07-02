#include <iostream>
using namespace std;

int main() {
    int nTrabajadores;
    cout << "Introduce el número de trabajadores: ";
    cin >> nTrabajadores;

    double horas, sueldoHora, sueldoTotal = 0.0;

    for (int i = 1; i <= nTrabajadores; ++i) {
        cout << "\nTrabajador " << i << ":\n";
        cout << "Horas trabajadas: ";
        cin >> horas;
        cout << "Sueldo por hora: ";
        cin >> sueldoHora;

        double sueldoIndividual = horas * sueldoHora;
        cout << "Sueldo del trabajador " << i << ": " << sueldoIndividual << " euros\n";

        sueldoTotal += sueldoIndividual;
    }

    cout << "\nTotal a pagar a todos los trabajadores: " << sueldoTotal << " euros\n";

    return 0;
}
