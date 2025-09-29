#include <list>
#include <iostream>

void modificarYMostrar(std::list<int>& lista) {
    for (int& n : lista) {
        n *= 2; // Duplica cada elemento
    }
    for (int n : lista) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> datos {1, 2, 3, 4, 5};
    modificarYMostrar(datos);
    return 0;
}
