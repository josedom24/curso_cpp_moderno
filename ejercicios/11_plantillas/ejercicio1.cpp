#include <iostream>
#include <string>

// Función plantilla genérica
template <typename T>
bool es_mayor(const T& a, const T& b) {
    return a > b;
}

int main() {
    int x = 5, y = 3;
    double d1 = 4.5, d2 = 7.2;
    std::string s1 = "Hola", s2 = "Adiós";

    // Comparaciones con int
    std::cout << std::boolalpha; // Muestra true/false en lugar de 1/0
    std::cout << "x > y: " << es_mayor(x, y) << std::endl;

    // Comparaciones con double
    std::cout << "d1 > d2: " << es_mayor(d1, d2) << std::endl;

    // Comparaciones con string
    std::cout << "s1 > s2: " << es_mayor(s1, s2) << std::endl;

    return 0;
}
