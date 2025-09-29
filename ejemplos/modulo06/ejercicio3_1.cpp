#include <array>
#include <iostream>

int main() {
    std::array<int, 5> numeros {1, 2, 3, 4, 5};

    for (int n : numeros) {
        std::cout << n << " ";
    }
}
