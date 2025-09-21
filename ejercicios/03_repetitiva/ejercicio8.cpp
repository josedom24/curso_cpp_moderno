#include <iostream>
#include <string>
#include <cctype>  // para funciones isalpha, tolower

using namespace std;

int main() {
    string texto;
    cout << "Introduce un texto: ";
    getline(cin, texto);

    for (char c : texto) {
        if (!isalpha(c)) {
            cout << c << " -> No alfabético\n";
        } else {
            // Convertimos a minúscula para simplificar la comparación
            char cMinuscula = tolower(c);
            if (cMinuscula == 'a' || cMinuscula == 'e' || cMinuscula == 'i' || cMinuscula == 'o' || cMinuscula == 'u') {
                cout << c << " -> Vocal\n";
            } else {
                cout << c << " -> Consonante\n";
            }
        }
    }

    return 0;
}
