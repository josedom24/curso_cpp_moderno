#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> lista = {4, 2, 7, 3, 1};

    // std::list no permite std::sort, se usa su método propio
    lista.sort();
    std::cout << "Lista ordenada: ";
    for (int n : lista) std::cout << n << " ";
    std::cout << std::endl;

    // std::reverse funciona porque opera sobre iteradores bidireccionales
    std::reverse(lista.begin(), lista.end());
    std::cout << "Lista invertida: ";
    for (int n : lista) std::cout << n << " ";
    std::cout << std::endl;

    // std::count: contar apariciones de un valor
    int numVeces = std::count(lista.begin(), lista.end(), 2);
    std::cout << "El número 2 aparece " << numVeces << " veces." << std::endl;

    // std::find: buscar un valor
    auto it = std::find(lista.begin(), lista.end(), 7);
    if (it != lista.end()) {
        std::cout << "El número 7 se encuentra en la lista." << std::endl;
    }
}
