#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    for (std::size_t i = 0; i < texto.size(); i++) {
        std::cout << texto[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
