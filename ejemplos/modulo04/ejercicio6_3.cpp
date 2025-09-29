#include <iostream>

struct Rectangulo {
    double ancho;
    double alto;
};

void mostrarRectangulo(const Rectangulo& r) {
    std::cout << "Ancho: " << r.ancho << ", Alto: " << r.alto << std::endl;
}

void redimensionarRectangulo(Rectangulo& r, double nuevoAncho, double nuevoAlto) {
    r.ancho = nuevoAncho;
    r.alto = nuevoAlto;
}

int main() {
    Rectangulo r{5.0, 3.0};
    mostrarRectangulo(r);

    redimensionarRectangulo(r, 8.0, 4.5);
    std::cout << "Después de redimensionar:" << std::endl;
    mostrarRectangulo(r);

    return 0;
}
