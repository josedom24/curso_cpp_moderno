#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numeros{1, 2, 3, 4, 5};

    for (int valor : numeros) {
        std::cout << valor << " ";
    }

    std::cout << std::endl;
    return 0;
}
