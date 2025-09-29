#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> edades {
        {"Ana", 25},
        {"Luis", 30}
    };

    edades.insert({"María", 28});   // Insertar un nuevo elemento
    edades["Pedro"] = 35;           // Insertar o modificar un elemento

    std::cout << "Edad de Ana: " << edades.at("Ana") << std::endl;

    if (edades.count("Luis") > 0) {
        std::cout << "Luis está en el mapa." << std::endl;
    }
    edades.erase("Ana");            // Eliminar un elemento
    std::cout << "Tamaño del mapa: " << edades.size() << std::endl;
    edades.clear();                 // Eliminar todos los elementos
    return 0;
}
