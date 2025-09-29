#include <vector>
#include <iostream>

int main() {
    std::vector<int> numeros {1, 2, 3};

    // Mostrar el segundo elemento
     std::cout << "Segundo elemento: " << numeros[1] << std::endl;
     std::cout << "Segundo elemento: " << numeros.at(1) << std::endl;

    // Añadir elementos al final
    numeros.push_back(4);
    numeros.push_back(5);

    // Mostrar contenido
    std::cout << "Contenido del vector: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Tamaño
    std::cout << "Tamaño: " << numeros.size() << std::endl;

    // Eliminar el último elemento
    numeros.pop_back();

    // Acceso al primer y último elemento
    std::cout << "Primero: " << numeros.front() << ", Último: " << numeros.back() << std::endl;

    // Redimensionar a 2 elementos
    numeros.resize(2);
    std::cout << "Vector tras resize(2): ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Vaciar el vector
    numeros.clear();
    std::cout << "¿Está vacío? " << (numeros.empty() ? "Sí" : "No") << std::endl;
}
