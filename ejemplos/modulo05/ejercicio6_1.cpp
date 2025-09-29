#include <iostream>
#include <string>

// Clase base
class Animal {
private:
    std::string nombre;

public:
    // Constructor por defecto usando lista de inicialización
    Animal() : nombre{""} {}

    // Constructor con parámetro usando lista de inicialización
    Animal(const std::string& n) : nombre{n} {}

    void respirar() const {
        std::cout << nombre << " está respirando." << std::endl;
    }

    void mostrarNombre() const {
        std::cout << "Nombre: " << nombre << std::endl;
    }
};

// Clase derivada
class Perro : public Animal {
private:
    std::string raza;

public:
    // Constructor por defecto
    Perro() : Animal{}, raza{""} {}

    // Constructor con parámetros usando lista de inicialización
    Perro(const std::string& n, const std::string& r)
        : Animal{n}, raza{r} {}
        
    void mostrar() const {
        mostrarNombre(); // Método heredado de Animal
        std::cout << "Raza: " << raza << std::endl;
    }

    void ladrar() const {
        std::cout << "¡Guau guau!" << std::endl;
    }
};

int main() {
    Perro miPerro{"Firulais", "Pastor Alemán"};

    miPerro.respirar();  // Método heredado de Animal
    miPerro.mostrar();   // Método propio que llama a mostrarNombre()
    miPerro.ladrar();    // Método exclusivo de Perro

    return 0;
}
