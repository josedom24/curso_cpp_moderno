#include <list>
#include <iostream>

int main() {
    std::list<int> numeros {10, 20, 30, 40, 50};

    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
