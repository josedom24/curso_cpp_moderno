#include <iostream>

int main() {
    int edad = 17;
    std::string resultado{ (edad >= 18) ? "Mayor de edad" : "Menor de edad"};
    std::cout << resultado << '\n';
    return 0;
}
