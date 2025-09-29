#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    for (std::string::iterator it = texto.begin(); it != texto.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}
