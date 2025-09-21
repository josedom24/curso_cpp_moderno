#include <iostream>
#include <string>

// Función plantilla para intercambiar valores
template <typename T>
void intercambiar(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double d1 = 1.5, d2 = 3.7;
    std::string s1 = "Hola", s2 = "Mundo";

    // Intercambio de enteros
    std::cout << "Antes: x = " << x << ", y = " << y << std::endl;
    intercambiar(x, y);
    std::cout << "Después: x = " << x << ", y = " << y << std::endl;

    // Intercambio de doubles
    std::cout << "Antes: d1 = " << d1 << ", d2 = " << d2 << std::endl;
    intercambiar(d1, d2);
    std::cout << "Después: d1 = " << d1 << ", d2 = " << d2 << std::endl;

    // Intercambio de strings
    std::cout << "Antes: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    intercambiar(s1, s2);
    std::cout << "Después: s1 = " << s1 << ", s2 = " << s2 << std::endl;

    return 0;
}
