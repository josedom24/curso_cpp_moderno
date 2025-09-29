#include <iostream>
#include <string>

// Función plantilla para imprimir un valor genérico
template <typename T>
void print(const T& valor) {
    std::cout << valor << '\n';
}

int main() {
    int x = 42;
    double pi = 3.14159;
    std::string mensaje = "Hola, mundo";

    std::cout << "Impresión de un int: ";
    print(x);

    std::cout << "Impresión de un double: ";
    print(pi);

    std::cout << "Impresión de un string: ";
    print(mensaje);

    return 0;
}
