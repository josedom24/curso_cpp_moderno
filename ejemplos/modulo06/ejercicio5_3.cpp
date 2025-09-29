#include <list>
#include <iostream>

int main() {
    std::list<int> numeros {10, 20, 30, 40, 50};

    for (int valor : numeros) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
    return 0;
}
