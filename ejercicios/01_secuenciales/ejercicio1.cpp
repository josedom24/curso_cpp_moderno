#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre {};  // Variable para almacenar el nombre

    cout << "Introduce tu nombre completo: ";
    getline(cin, nombre);  // Leemos la línea completa, incluyendo espacios

    cout << "¡Hola " << nombre << "! Bienvenido al curso de C++." << endl;

    return 0;
}
