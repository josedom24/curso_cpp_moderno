#include <iostream>
#include <string>

class Animal {
protected:
    std::string nombre;

public:
    Animal(const std::string& n) : nombre{n} {}

    virtual void hacerSonido() const {  // Método virtual
        std::cout << nombre << " hace un sonido genérico." << std::endl;
    }
};

class Perro : public Animal {
public:
    Perro(const std::string& n) : Animal{n} {}

    void hacerSonido() const override {
        std::cout << nombre << " dice: ¡Guau guau!" << std::endl;
    }
};

class Gato : public Animal {
public:
    Gato(const std::string& n) : Animal{n} {}

    void hacerSonido() const override {
        std::cout << nombre << " dice: ¡Miau!" << std::endl;
    }
};

int main() {
    Perro perro("Firulais");
    Gato gato("Misu");

    // Polimorfismo usando referencias
    Animal& a1 = perro;
    Animal& a2 = gato;

    a1.hacerSonido(); // Llama a Perro::hacerSonido()
    a2.hacerSonido(); // Llama a Gato::hacerSonido()

    return 0;
}
