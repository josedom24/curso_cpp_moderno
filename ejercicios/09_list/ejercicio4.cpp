#include <iostream>
#include <list>

void eliminarValor(std::list<int>& lista, int valor) {
    lista.remove(valor); // elimina todas las apariciones
}

void mostrarLista(const std::list<int>& lista) {
    for (int elemento : lista) {
        std::cout << elemento << ' ';
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

    std::cout << "Introduce el valor a eliminar: ";
    std::cin >> valor;

    eliminarValor(numeros, valor);

    std::cout << "Lista después de eliminar " << valor << ":\n";
    mostrarLista(numeros);

    return 0;
}
