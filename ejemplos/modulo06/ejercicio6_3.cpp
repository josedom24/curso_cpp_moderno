#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> edades {
        {"Ana", 25},
        {"Luis", 30},
        {"María", 28}
    };

    for (const auto& par : edades) {
        std::cout << par.first << " tiene " << par.second << " años." << std::endl;
    }

    return 0;
}
