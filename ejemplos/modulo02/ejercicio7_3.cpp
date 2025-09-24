#include <iostream>

int main() {
    char letra {'A'};
    int codigo {static_cast<int>(letra)};

    std::cout << "La letra es: " << letra << std::endl;
    std::cout << "Su código es: " << codigo << std::endl;
    return 0;
}
