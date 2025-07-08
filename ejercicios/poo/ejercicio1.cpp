#include <iostream>

// Definición de la clase Rectangulo
class Rectangulo {
private:
    // Atributos privados (encapsulados): no son accesibles desde fuera de la clase
    double base;
    double altura;

public:
    // Constructor con inicialización uniforme
    Rectangulo(double base, double altura)
        : base{base}, altura{altura} {}  // Inicializamos los atributos

    // Getter para la base
    double getBase() const {
        return base;
    }

    // Setter para la base
    void setBase(double nuevaBase) {
        base = nuevaBase;
    }

    // Getter para la altura
    double getAltura() const {
        return altura;
    }

    // Setter para la altura
    void setAltura(double nuevaAltura) {
        altura = nuevaAltura;
    }

    // Método constante para calcular el área del rectángulo
    double area() const {
        return base * altura;
    }

    // Método constante para calcular el perímetro del rectángulo
    double perimetro() const {
        return 2 * (base + altura);
    }
};

int main() {
    // Creamos un rectángulo de 10x5
    Rectangulo r1{10.0, 5.0};

    // Mostramos sus propiedades usando los métodos públicos
    std::cout << "Rectangulo 1\n";
    std::cout << "Base: " << r1.getBase() << '\n';
    std::cout << "Altura: " << r1.getAltura() << '\n';
    std::cout << "Area: " << r1.area() << '\n';
    std::cout << "Perimetro: " << r1.perimetro() << "\n\n";

    // Creamos otro rectángulo usando otros valores
    Rectangulo r2{7.5, 3.2};
    std::cout << "Rectangulo 2\n";
    std::cout << "Base: " << r2.getBase() << '\n';
    std::cout << "Altura: " << r2.getAltura() << '\n';
    std::cout << "Area: " << r2.area() << '\n';
    std::cout << "Perimetro: " << r2.perimetro() << "\n\n";

    // Modificamos las dimensiones del segundo rectángulo usando setters
    r2.setBase(8.0);
    r2.setAltura(4.0);
    std::cout << "Rectangulo 2 modificado\n";
    std::cout << "Base: " << r2.getBase() << '\n';
    std::cout << "Altura: " << r2.getAltura() << '\n';
    std::cout << "Area: " << r2.area() << '\n';
    std::cout << "Perimetro: " << r2.perimetro() << '\n';

    return 0;
}
