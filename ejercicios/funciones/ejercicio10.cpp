#include <iostream>

struct Fraccion {
    int numerador;
    int denominador;
};

int mcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return (a < 0) ? -a : a; // valor absoluto
}

Fraccion leerFraccion() {
    Fraccion f;
    do {
        std::cout << "Introduce numerador: ";
        std::cin >> f.numerador;
        std::cout << "Introduce denominador (distinto de 0): ";
        std::cin >> f.denominador;
        if (f.denominador == 0) {
            std::cout << "Denominador no puede ser cero. Intenta de nuevo.\n";
        }
    } while (f.denominador == 0);
    return f;
}

void simplificar(Fraccion& f) {
    int divisor = mcd(f.numerador, f.denominador);
    f.numerador /= divisor;
    f.denominador /= divisor;
    // Normalizar signo: denominador siempre positivo
    if (f.denominador < 0) {
        f.denominador = -f.denominador;
        f.numerador = -f.numerador;
    }
}

Fraccion sumar(const Fraccion& f1, const Fraccion& f2) {
    Fraccion resultado;
    resultado.numerador = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    resultado.denominador = f1.denominador * f2.denominador;
    simplificar(resultado);
    return resultado;
}

void escribirFraccion(const Fraccion& f) {
    if (f.denominador == 1) {
        std::cout << f.numerador << "\n";
    } else {
        std::cout << f.numerador << "/" << f.denominador << "\n";
    }
}

int main() {
    std::cout << "Introduce la primera fracción:\n";
    Fraccion f1 = leerFraccion();

    std::cout << "Introduce la segunda fracción:\n";
    Fraccion f2 = leerFraccion();

    Fraccion suma = sumar(f1, f2);

    std::cout << "La suma simplificada es: ";
    escribirFraccion(suma);

    return 0;
}
