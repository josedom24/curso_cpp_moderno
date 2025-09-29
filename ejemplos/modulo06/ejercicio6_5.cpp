#include <iostream>
#include <map>
#include <string>

void mostrar(const std::map<std::string, int>& datos) {
    for (const auto& par : datos) {
        std::cout << par.first << ": " << par.second << std::endl;
    }
}

int main() {
    std::map<std::string, int> edades {
        {"Ana", 25},
        {"Luis", 30},
        {"María", 28}
    };

    mostrar(edades);

    return 0;
}

Y otro ejemplo, donde vamos a modificar los datos del mapa, donde utilizamos paso por referencia:

```cpp
#include <iostream>
#include <unordered_map>
#include <string>

void agregarTelefono(std::unordered_map<std::string, int>& telefonos) {
    telefonos["Pedro"] = 2222;
}

int main() {
    std::unordered_map<std::string, int> telefonos {
        {"Ana", 1234},
        {"Luis", 5678}
    };

    agregarTelefono(telefonos);

    for (const auto& par : telefonos) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    return 0;
}
