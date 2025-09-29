#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    for (char c : texto) {
        std::cout << c << ' ';
    }
    std::cout << std::endl;

    return 0;
}
