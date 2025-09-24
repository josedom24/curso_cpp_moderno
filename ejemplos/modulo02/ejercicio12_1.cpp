#include <iostream>

enum class Color {
    Rojo,
    Verde,
    Azul
};

int main() {
    Color c {Color::Verde};

    if (c == Color::Verde) {
        std::cout << "El color es verde\n";
    }
    return 0;
}
