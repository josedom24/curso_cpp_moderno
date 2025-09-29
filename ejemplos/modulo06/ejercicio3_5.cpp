#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numeros{1, 2, 3, 4, 5};

    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}
