#include <iostream>

// Función plantilla que devuelve el mayor de dos valores
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Ejemplo con enteros
    int x = 5, y = 10;
    auto resultado = max(x, y);  // T deducido como int
    std::cout << "El mayor entre " << x << " y " << y << " es " << resultado << std::endl;

    // Ejemplo con double
    double a = 3.14, b = 2.71;
    auto resultado2 = max(a, b); // T deducido como double
    std::cout << "El mayor entre " << a << " y " << b << " es " << resultado2 << std::endl;

    // Ejemplo con std::string
    std::string s1 = "hola", s2 = "mundo";
    auto resultado3 = max(s1, s2); // T deducido como std::string
    std::cout << "El mayor entre \"" << s1 << "\" y \"" << s2 << "\" es \"" << resultado3 << "\"" << std::endl;

    // Uso explicito de tipos 
    // La función es instancia con double
    auto resultado4 = max<double>(3, 7.5);
    std::cout << "El mayor es \"" << resultado4 << "\"" 
    return 0;
}
