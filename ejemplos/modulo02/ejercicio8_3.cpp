#include <iostream>
#include <string>

int main() {
    std::string nombre {"Pepe"};
    std::string apellidos {"García"};
    std::string nombre_completo {};

    nombre_completo = nombre + " " + apellidos;

    std::cout << nombre_completo << std::endl;
    return 0;
}
