#include <iostream>

int main() {
    int edad = 10;

    std::cout << &edad << std::endl;   // Muestra la dirección de memoria de 'edad'
    std::cout << *&edad << std::endl;  // Muestra el contenido de esa dirección (valor de 'edad')
    *&edad = 12;                       // Modifica el contenido de la variable usando su dirección
    std::cout << edad << std::endl;    // Comprueba que el valor de 'edad' ha cambiado

    return 0;
}
