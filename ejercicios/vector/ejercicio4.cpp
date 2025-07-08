#include <iostream>
#include <vector>

void eliminarValor(std::vector<int>& v, int valor) {
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it == valor) {
            v.erase(it);
            return;
        }
    }
}

void mostrarVector(const std::vector<int>& v) {
    for (int valor : v) {
        std::cout << valor << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> numeros;
    int valor;

    std::cout << "Introduce números (termina con -1):\n";
    while (true) {
        std::cin >> valor;
        if (valor == -1) break;
        numeros.push_back(valor);
    }

    std::cout << "Introduce el valor a eliminar: ";
    std::cin >> valor;

    eliminarValor(numeros, valor);

    std::cout << "Vector después de eliminar " << valor << ":\n";
    mostrarVector(numeros);

    return 0;
}
