#include <iostream>
#include <list>

void mostrarLista(const std::list<int>& lista) {
    for (int valor : lista) {
        std::cout << valor << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::list<int> numeros;
    int valor;

    std::cout << "Introduce números enteros (negativo para terminar):\n";
    while (std::cin >> valor && valor >= 0) {
        numeros.push_back(valor);
    }

    numeros.sort(); // ordena de menor a mayor

    std::cout << "Lista ordenada:\n";
    mostrarLista(numeros);

    return 0;
}
