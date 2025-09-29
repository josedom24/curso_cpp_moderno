#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numeros{1, 2, 3, 4, 5};

    for (std::size_t i = 0; i < numeros.size(); i++) {
        std::cout << numeros.at(i) << " ";
    }

    std::cout << std::endl;
    return 0;
}
