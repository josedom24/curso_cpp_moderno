#include <iostream>
#include <map>
#include <string>

void mostrarProductos(const std::map<std::string, double>& productos) {
    for (const auto& [nombre, precio] : productos) {
        std::cout << nombre << ": " << precio << " €\n";
    }
}

int main() {
    std::map<std::string, double> productos;
    std::string nombre;
    double precio;

    std::cout << "Introduce productos y precios (escribe 'fin' como nombre para terminar):\n";
    while (true) {
        std::cout << "Producto: ";
        std::getline(std::cin, nombre);
        if (nombre == "fin") break;

        std::cout << "Precio: ";
        std::cin >> precio;
        std::cin.ignore();

        productos[nombre] = precio;
    }

    std::cout << "Producto a modificar: ";
    std::getline(std::cin, nombre);

    if (productos.count(nombre)) {
        std::cout << "Nuevo precio: ";
        std::cin >> precio;
        productos[nombre] = precio;
    } else {
        std::cout << "El producto no existe.\n";
    }

    std::cout << "\nLista final de productos:\n";
    mostrarProductos(productos);

    return 0;
}
