#include <iostream>
#include <unord_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> telefonos {
        {"Ana", 1234},
        {"Luis", 5678},
        {"María", 9101}
    };

    for (auto it = telefonos.begin(); it != telefonos.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
