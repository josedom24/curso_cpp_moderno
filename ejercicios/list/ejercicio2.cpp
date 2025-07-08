#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> nombres;
    std::string nombre;

    std::cout << "Introduce nombres (escribe 'fin' para terminar):\n";
    while (true) {
        std::getline(std::cin, nombre);
        if (nombre == "fin") break;

        if (!nombre.empty() && nombre[0] == 'A') {
            nombres.push_front(nombre);
        } else {
            nombres.push_back(nombre);
        }
    }

    std::cout << "Contenido final de la lista:\n";
    for (const std::string& n : nombres) {
        std::cout << n << '\n';
    }

    return 0;
}
