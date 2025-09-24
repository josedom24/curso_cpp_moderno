#include <iostream>
#include <vector>
#include <string>
#include <list>

// Función plantilla que cuenta cuántas veces aparece un valor en un contenedor
template <typename Contenedor, typename T>
int contarCoincidencias(const Contenedor& c, const T& valor) {
    int contador = 0;
    for (const auto& elem : c) {
        if (elem == valor) {
            ++contador;
        }
    }
    return contador;
}

int main() {
    std::vector<int> numeros = {1, 2, 3, 2, 4, 2};
    std::list<std::string> palabras = {"hola", "mundo", "hola"};

    std::cout << "El número 2 aparece " << contarCoincidencias(numeros, 2) << " veces." << std::endl; // 3
    std::cout << "\"hola\" aparece " << contarCoincidencias(palabras, std::string("hola")) << " veces." << std::endl; // 2

    return 0;
}
