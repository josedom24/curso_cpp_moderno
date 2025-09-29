#include <iostream>
#include <fstream>

int main() {
    try {
        std::ofstream archivo;
        archivo.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        archivo.open("log.txt", std::ios::app);

        archivo << "Nueva línea de log\n";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al escribir en log.txt: " << e.what() << '\n';
    }
}
