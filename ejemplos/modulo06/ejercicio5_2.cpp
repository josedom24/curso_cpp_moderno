#include <list>
#include <iostream>

int main() {
    std::list<int> numeros {1, 2, 3};

    numeros.push_back(4);     // Añade al final
    numeros.push_front(0);    // Añade al principio

    std::cout << "Tamaño: " << numeros.size() << std::endl;

    numeros.pop_back();       // Elimina el último elemento
    numeros.pop_front();      // Elimina el primer elemento

    // Insertar en la segunda posición
    auto it = numeros.begin();
    ++it;
    numeros.insert(it, 99);   // Inserta 99 en la segunda posición

    // Eliminar el segundo elemento
    it = numeros.begin();
    ++it;
    numeros.erase(it);

    // Mostrar los elementos
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    numeros.clear(); // Vacía la lista
    return 0;
}
