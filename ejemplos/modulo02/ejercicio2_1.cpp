#include <iostream>
using namespace std;

int main() {
    // ----- Tipos de datos carácter -----
    char letra = 'A';                // Literal de carácter (ASCII 65)
    unsigned char simbolo = 200;     // ASCII extendido
    char saltoLinea = '\n';          // Carácter de escape: nueva línea
    char tabulador = '\t';           // Carácter de escape: tabulador

    // Operaciones aritméticas con caracteres
    char siguiente = letra + 1;      // 'B' porque internamente 'A' es 65 y 65+1 = 66
    int codigo = letra;              // Conversión implícita de char a int (imprime 65)

    cout << "Letra: " << letra << endl;
    cout << "Siguiente letra: " << siguiente << endl;
    cout << "Codigo ASCII de " << letra << ": " << codigo << endl;
    cout << "Caracter especial (tabulador + texto):" << tabulador << "Hola" << endl;

    // ----- Tipos de datos booleanos -----
    bool valorVerdadero = true;
    bool valorFalso = false;

    cout << boolalpha; // Para imprimir true/false en lugar de 1/0
    cout << "Valor booleano verdadero: " << valorVerdadero << endl;
    cout << "Valor booleano falso: " << valorFalso << endl;

    return 0;
}
