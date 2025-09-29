#include <iostream>

class Rectangulo {
public:
    double base;
    double altura;

    // Constructor por defecto
    Rectangulo() {
        base = 0.0;
        altura = 0.0;
    }

    // Constructor con parámetros
    Rectangulo(double b, double h) {
        base = b;
        altura = h;
    }

    // Método para calcular el área
    double calcularArea() const {
        return base * altura;
    }

    // Método para establecer las dimensiones usando inicialización uniforme
    void establecerDimensiones(double b, double h) {
        base = b;
        altura = h;
    }
};

int main() {
    // Crear un objeto usando el constructor por defecto
    Rectangulo r1();
    std::cout << "Área del rectángulo r1 (por defecto): " << r1.calcularArea() << std::endl;

    // Crear un objeto usando el constructor con parámetros
    Rectangulo r2(5.0, 3.0);
    std::cout << "Área del rectángulo r2 (con parámetros): " << r2.calcularArea() << std::endl;

    // Modificar las dimensiones de r1 usando el método establecerDimensiones
    r1.establecerDimensiones(7.0, 4.0);
    std::cout << "Área del rectángulo r1 después de actualizar dimensiones: " << r1.calcularArea() << std::endl;

    return 0;
}
