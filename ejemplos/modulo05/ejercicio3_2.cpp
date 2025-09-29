#include <iostream>

class Rectangulo {
private:
    double base;   
    double altura; 

public:
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

    // Métodos setters
    void setBase(double b) {
        base = b;
    }

    void setAltura(double h) {
        altura = h;
    }

    // Métodos getters
    double getBase() const {
        return base;
    }

    double getAltura() const {
        return altura;
    }

    // Método para calcular el área
    double calcularArea() const {
        return base * altura;
    }
};

int main() {
    // Crear un objeto usando el constructor por defecto
    Rectangulo r1;

    // Usar los setters para asignar valores
    r1.setBase(7.0);
    r1.setAltura(4.0);

    // Usar los getters para obtener los valores de base y altura y mostrar el área
    std::cout << "Área del rectángulo r1 (por defecto, luego usando setters): " 
              << r1.calcularArea() << " (Base: " << r1.getBase() 
              << ", Altura: " << r1.getAltura() << ")" << std::endl;

    // Crear un objeto usando el constructor con parámetros
    Rectangulo r2{5.0, 3.0};  // Inicialización uniforme

    // Usar los getters para obtener los valores de base y altura y mostrar el área
    std::cout << "Área del rectángulo r2 (con parámetros): " 
              << r2.calcularArea() << " (Base: " << r2.getBase() 
              << ", Altura: " << r2.getAltura() << ")" << std::endl;

    // Modificar las dimensiones de r2 usando los setters
    r2.setBase(10.0);
    r2.setAltura(2.0);

    // Usar los getters para obtener los valores de base y altura y mostrar el área
    std::cout << "Área del rectángulo r2 después de actualizar dimensiones con setters: " 
              << r2.calcularArea() << " (Base: " << r2.getBase() 
              << ", Altura: " << r2.getAltura() << ")" << std::endl;

    return 0;
}
