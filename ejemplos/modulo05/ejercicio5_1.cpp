#include <iostream>
#include <string>

class Direccion {
private:
    std::string calle;
    std::string ciudad;

public:
    // Constructor por defecto usando lista de inicialización
    Direccion() : calle{""}, ciudad{""} {}

    // Constructor con parámetros usando lista de inicialización
    Direccion(const std::string& c, const std::string& ciu)
        : calle{c}, ciudad{ciu} {}

    void mostrar() const {
        std::cout << "Calle: " << calle << ", Ciudad: " << ciudad << std::endl;
    }
};

class Persona {
private:
    std::string nombre;
    Direccion direccion;  // Composición: una Persona tiene una Direccion

public:
    // Constructor usando lista de inicialización para todos los miembros
    Persona(const std::string& n, const Direccion& d)
        : nombre{n}, direccion{d} {}

    void mostrar() const {
        std::cout << "Nombre: " << nombre << std::endl;
        direccion.mostrar();
    }
};

int main() {
    Direccion dir("Calle Mayor 123", "Madrid");
    Persona p("Juan", dir);

    p.mostrar();

    return 0;
}
