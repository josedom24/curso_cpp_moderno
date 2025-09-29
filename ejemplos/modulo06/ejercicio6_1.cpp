#include <map>
#include <unordered_map>
#include <string>

int main() {
    std::map<std::string, int> edades {
        {"Ana", 25},
        {"Luis", 30},
        {"Maria", 28}
    };

    std::unordered_map<std::string, int> telefonos {
        {"Ana", 1234},
        {"Luis", 5678},
        {"Maria", 9101}
    };

    return 0;
}
