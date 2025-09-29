#include <iostream>
#include <string>

// Plantilla de función para intercambiar dos valores
template <typename T>
void mi_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Antes de swap (int): x = " << x << ", y = " << y << '\n';
    mi_swap(x, y);
    std::cout << "Después de swap (int): x = " << x << ", y = " << y << '\n';

    double a = 3.14, b = 2.71;
    std::cout << "Antes de swap (double): a = " << a << ", b = " << b << '\n';
    mi_swap(a, b);
    std::cout << "Después de swap (double): a = " << a << ", b = " << b << '\n';

    std::string s1 = "rojo", s2 = "azul";
    std::cout << "Antes de swap (string): s1 = " << s1 << ", s2 = " << s2 << '\n';
    mi_swap(s1, s2);
    std::cout << "Después de swap (string): s1 = " << s1 << ", s2 = " << s2 << '\n';

    return 0;
}
