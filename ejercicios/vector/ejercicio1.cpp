#include <iostream>
#include <vector>

void mostrarVector(const std::vector<int>& v) {
    for (int valor : v) {
        std::cout << valor << ' ';
    }
    std::cout << '\n';
}

int main() {
    int n;
    std::cout << "¿Cuántos elementos deseas introducir? ";
    std::cin >> n;

    std::vector<int> numeros(n);
    std::cout << "Introduce " << n << " números:\n";
    for (int& num : numeros) {
        std::cin >> num;
    }

    std::cout << "Contenido del vector:\n";
    mostrarVector(numeros);

    return 0;
}
