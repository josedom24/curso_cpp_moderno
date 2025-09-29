#include <iostream>

int main() {
    // Declaramos una variable entera
    int edad = 10;

    // Declaramos una referencia a 'edad'
    int& ref_edad = edad;  // ref_edad es un alias de 'edad'

    // Mostramos los valores iniciales
    std::cout << "Valor inicial de 'edad': " << edad << std::endl;
    std::cout << "Valor inicial a través de la referencia 'ref_edad': " << ref_edad << std::endl;

    // Modificamos el valor usando la referencia
    ref_edad = 15;

    // Comprobamos que 'edad' ha cambiado
    std::cout << "Valor de 'edad' después de modificarlo con la referencia: " << edad << std::endl;
    std::cout << "Valor a través de la referencia 'ref_edad': " << ref_edad << std::endl;

    return 0;
}
