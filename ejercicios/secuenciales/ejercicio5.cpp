#include <iostream>

int main() {
    double fahrenheit { 0.0 };

    std::cout << "Introduce los grados Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius { (fahrenheit - 32) * 5.0 / 9.0 };

    std::cout << fahrenheit << " grados Fahrenheit equivalen a "
              << celsius << " grados Celsius." << std::endl;

    return 0;
}
