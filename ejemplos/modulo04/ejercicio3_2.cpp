#include <iostream>

int main() {
    // Declaramos una variable entera
    int edad = 10;

    // Declaramos un puntero a entero
    int* ptr;

    // El puntero apunta a la dirección de 'edad'
    ptr = &edad;

    // Mostramos la dirección de memoria de 'edad' usando el puntero
    std::cout << "Dirección de memoria almacenada en ptr: " << ptr << std::endl;

    // Accedemos al contenido apuntado por ptr (valor de 'edad')
    std::cout << "Valor de 'edad' a través del puntero: " << *ptr << std::endl;

    // Modificamos el valor de 'edad' usando el puntero
    *ptr = 12;

    // Comprobamos que el valor de 'edad' ha cambiado
    std::cout << "Nuevo valor de 'edad' después de modificarlo con ptr: " << edad << std::endl;

    return 0;
}
