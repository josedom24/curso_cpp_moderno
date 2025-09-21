#include <iostream>
#include <vector>
#include <list>
#include <string>  // Solo para demostrar strings, si se desea concatenación

// Función plantilla que suma los elementos de un contenedor
template <typename Contenedor>
auto sumar_elementos(const Contenedor& c) {
    using TipoElemento = typename Contenedor::value_type; // Tipo de los elementos del contenedor
    TipoElemento suma{}; // Inicialización a 0 o valor por defecto
    for (const auto& elem : c) {
        suma += elem;
    }
    return suma;
}

int main() {
    std::vector<int> v_int = {1, 2, 3, 4, 5};
    std::list<double> l_double = {1.5, 2.5, 3.0};
    std::vector<std::string> v_str = {"Hola", " ", "Mundo"};

    std::cout << "Suma de enteros: " << sumar_elementos(v_int) << std::endl;
    std::cout << "Suma de doubles: " << sumar_elementos(l_double) << std::endl;
    std::cout << "Concatenación de strings: " << sumar_elementos(v_str) << std::endl;

    return 0;
}
