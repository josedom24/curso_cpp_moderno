#include <iostream>
using namespace std;

int main() {
    // Declaración de variables numéricas
    int a = 10;                 // Entero con signo
    unsigned int b = 20U;       // Entero sin signo (sufijo U)
    long c = 1000000L;          // Entero largo (sufijo L)
    float d = 3.14f;            // Número real de precisión simple (sufijo f)
    double e = 2.71828;         // Número real de doble precisión

    // Operaciones aritméticas básicas
    int suma = a + b;           // Suma de int y unsigned int
    int resta = b - a;          // Resta
    int producto = a * 2;       // Multiplicación
    int divisionEntera = b / a; // División entera: 20 / 10 = 2
    double divisionReal = b / d; // División real: convierte a double

    // Uso del operador módulo (solo válido con enteros)
    int resto = b % a;          // 20 % 10 = 0

    // Incremento y decremento
    int x = 5;
    int y = ++x;                // Pre-incremento: x=6, y=6
    int z = x++;                // Post-incremento: z=6, luego x=7

    // Ejemplo de precedencia
    int resultado1 = a + b * 2;     // Multiplicación antes que la suma: 10 + (20*2) = 50
    int resultado2 = (a + b) * 2;  // Paréntesis cambian la precedencia: (10+20)*2 = 60

    // Mostramos resultados
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Producto: " << producto << endl;
    cout << "Division entera: " << divisionEntera << endl;
    cout << "Division real: " << divisionReal << endl;
    cout << "Resto (modulo): " << resto << endl;
    cout << "Pre-incremento (++x): y = " << y << ", x = " << x << endl;
    cout << "Post-incremento (x++): z = " << z << ", x = " << x << endl;
    cout << "Resultado sin parentesis: " << resultado1 << endl;
    cout << "Resultado con parentesis: " << resultado2 << endl;

    return 0;
}
