#include <iostream>
#include <vector>
#include <string>

bool contieneNombre(const std::vector<std::string>& nombres, const std::string& objetivo) {
    for (const std::string& nombre : nombres) {
        if (nombre == objetivo) return true;
    }
    return false;
}

int main() {
    std::vector<std::string> nombres;
    std::string entrada;

    std::cout << "Introduce nombres (escribe 'fin' para terminar):\n";
    while (true) {
        std::getline(std::cin, entrada);
        if (entrada == "fin") break;
        nombres.push_back(entrada);
    }

    std::string nombreBuscar;
    std::cout << "Introduce un nombre a buscar: ";
    std::getline(std::cin, nombreBuscar);

    if (contieneNombre(nombres, nombreBuscar)) {
        std::cout << "El nombre '" << nombreBuscar << "' está en la lista.\n";
    } else {
        std::cout << "El nombre '" << nombreBuscar << "' no está en la lista.\n";
    }

    return 0;
}
