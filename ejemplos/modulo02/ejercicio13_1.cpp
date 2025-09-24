#include <iostream>

struct Punto {
    double x;
    double y;
};

int main() {
    Punto p;
    p.x = 3.5;
    p.y = 4.2;

    std::cout << "Coordenadas: (" << p.x << ", " << p.y << ")" << std::endl;

    return 0;
}
