#include <iostream>

int main() {
    enum class DiaSemana { 
        Lunes = 1, 
        Martes, 
        Miercoles, 
        Jueves, 
        Viernes, 
        Sabado, 
        Domingo 
    };

    int numero;
    std::cout << "Introduce un número del 1 al 7 para indicar el día de la semana: ";
    std::cin >> numero;

    if (numero < 1 || numero > 7) {
        std::cout << "Número inválido." << std::endl;
        return 1;
    }

    DiaSemana dia { static_cast<DiaSemana>(numero) };

    std::cout << "El día seleccionado es: ";
    switch (dia) {
        case DiaSemana::Lunes: std::cout << "Lunes"; break;
        case DiaSemana::Martes: std::cout << "Martes"; break;
        case DiaSemana::Miercoles: std::cout << "Miércoles"; break;
        case DiaSemana::Jueves: std::cout << "Jueves"; break;
        case DiaSemana::Viernes: std::cout << "Viernes"; break;
        case DiaSemana::Sabado: std::cout << "Sábado"; break;
        case DiaSemana::Domingo: std::cout << "Domingo"; break;
    }
    std::cout << std::endl;

    return 0;
}
