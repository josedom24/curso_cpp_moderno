#include <iostream>
using namespace std;

int main() {
    auto base { 0.0 };    // auto infiere que es double
    auto altura { 0.0 };  // idem

    cout << "Introduce la base del rectángulo: ";
    cin >> base;

    cout << "Introduce la altura del rectángulo: ";
    cin >> altura;

    auto area { base * altura };
    auto perimetro { 2 * (base + altura) };

    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;

    return 0;
}
