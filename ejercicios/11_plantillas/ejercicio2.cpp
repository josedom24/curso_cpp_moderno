#include <iostream>
#include <string>

// Función plantilla que repite un valor según un factor
template <typename T>
T repetirValor(const T& valor, int factor) {
    T resultado{};  // inicialización del resultado
    for (int i = 0; i < factor; ++i) {
        resultado = resultado + valor;
    }
    return resultado;
}

int main() {
    int x = 5;
    double y = 2.5;
    std::string s = "hola";

    std::cout << "x repetido 3 veces: " << repetirValor(x, 3) << std::endl;   // 15
    std::cout << "y repetido 4 veces: " << repetirValor(y, 4) << std::endl;   // 10.0
    std::cout << "s repetido 3 veces: " << repetirValor(s, 3) << std::endl;   // "holaholahola"

    return 0;
}
