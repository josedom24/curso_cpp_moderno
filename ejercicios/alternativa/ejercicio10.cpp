#include <iostream>

int main() {
    int dia, mes, anio;
    bool fechaCorrecta = true;

    std::cout << "Introduce el día: ";
    std::cin >> dia;

    std::cout << "Introduce el mes: ";
    std::cin >> mes;

    std::cout << "Introduce el año: ";
    std::cin >> anio;

    if (anio < 1) {
        fechaCorrecta = false;
    } else {
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (dia < 1 || dia > 31) fechaCorrecta = false;
                break;
            case 4: case 6: case 9: case 11:
                if (dia < 1 || dia > 30) fechaCorrecta = false;
                break;
            case 2:
                // Comprobación de año bisiesto
                bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
                if (bisiesto) {
                    if (dia < 1 || dia > 29) fechaCorrecta = false;
                } else {
                    if (dia < 1 || dia > 28) fechaCorrecta = false;
                }
                break;
            default:
                fechaCorrecta = false;
        }
    }

    if (fechaCorrecta) {
        std::cout << "La fecha es correcta.\n";
    } else {
        std::cout << "La fecha es incorrecta.\n";
    }

    return 0;
}
