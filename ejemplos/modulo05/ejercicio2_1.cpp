#include <iostream>

class Rectangulo {
public:
    double base;
    double altura;


    // Método para calcular el área
    double calcularArea() const {
        return base * altura;
    }

    // Método para establecer las dimensiones (si se desea cambiar después de la creación)
    void establecerDimensiones(double b, double h) {
        base = b;
        altura = h;
    }
};

int main() {
    // Crear el objeto con el constructor y pasar las dimensiones directamente
    Rectangulo r1;
    r1.base=3.0;
    r1.altura=5.0;

    std::cout << "Área del rectángulo: " << r1.calcularArea() << std::endl;

    // Si se desea cambiar las dimensiones después de la creación
    r1.establecerDimensiones(7.0, 4.0);
    std::cout << "Área del rectángulo actualizado: " << r1.calcularArea() << std::endl;

    return 0;
}
