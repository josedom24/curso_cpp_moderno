#include <iostream>

int main() {
    int nota{};
    std::cout << "Dime tu nota: ";
    std::cin >> nota;

    switch (nota) {
        case 1:
        case 2:
        case 3:
        case 4:
            std::cout << "Suspenso";
            break;
        case 5:
            std::cout << "Suficiente";
            break;
        case 6:
        case 7:
            std::cout << "Bien";
            break;
        case 8:
            std::cout << "Notable";
            break;
        case 9:
        case 10:
            std::cout << "Sobresaliente";
            break;
        default:
            std::cout << "Nota incorrecta";
            break;
    }

    std::cout << std::endl << "Programa terminado" << std::endl;
    return 0;
}
