#include <iostream>
#include <string>

// Función plantilla que compara dos valores de tipo genérico T
template<typename T>
bool esIgual(const T& a, const T& b) {
    return a == b;
}

int main() {
    // Ejemplo con enteros
    int x = 5, y = 5;
    bool resultado1 = esIgual(x, y);
    std::cout << "x y y son iguales? " << (resultado1 ? "Sí" : "No") << std::endl;

    // Ejemplo con double
    double a = 3.14, b = 2.71;
    bool resultado2 = esIgual(a, b);
    std::cout << "a y b son iguales? " << (resultado2 ? "Sí" : "No") << std::endl;

    // Ejemplo con std::string
    std::string s1 = "hola", s2 = "hola";
    bool resultado3 = esIgual(s1, s2);
    std::cout << "s1 y s2 son iguales? " << (resultado3 ? "Sí" : "No") << std::endl;

    return 0;
}
