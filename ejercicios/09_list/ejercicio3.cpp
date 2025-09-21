#include <iostream>
#include <list>

bool contiene(const std::list<int>& lista, int valor) {
    for (int elemento : lista) {
        if (elemento == valor) return true;
    }
    return false;
}

int main() {
    std::list<int> numeros;
    int valor;

    std::cout << "Introduce números enteros (negativo para terminar):\n";
    while (std::cin >> valor && valor >= 0) {
        numeros.push_back(valor);
    }

    std::cout << "Introduce un número a buscar: ";
    std::cin >> valor;

    if (contiene(numeros, valor)) {
        std::cout << "El número está en la lista.\n";
    } else {
        std::cout << "El número no está en la lista.\n";
    }

    return 0;
}
