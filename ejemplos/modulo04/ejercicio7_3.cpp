#include <iostream>
#include <string>

// Función que devuelve una referencia constante a un string estático
const std::string& obtenerNombre() {
    static std::string nombre = "Carlos";
    return nombre;
}

int main() {
    const std::string& nombre = obtenerNombre();  // Llamada a la función

    std::cout << "El nombre es: " << nombre << std::endl;

    return 0;
}
