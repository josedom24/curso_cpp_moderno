#include <list>
#include <iostream>

void mostrar(const std::list<int>& lista) {
    for (int n : lista) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> datos {10, 20, 30, 40, 50};
    mostrar(datos);
    return 0;
}
