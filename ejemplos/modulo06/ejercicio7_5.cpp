#include <iostream>
#include <map>
#include <algorithm>
#include <string>

int main() {
    std::map<std::string, int> edades {
        {"Ana", 25},
        {"Luis", 30},
        {"Maria", 28}
    };

    // std::for_each para mostrar contenido
    std::for_each(edades.begin(), edades.end(), [](const auto& par) {
        std::cout << par.first << " tiene " << par.second << " años.\n";
    });

    // std::count_if para contar personas mayores de 27
    int mayores = std::count_if(edades.begin(), edades.end(), [](const auto& par) {
        return par.second > 27;
    });
    std::cout << "Hay " << mayores << " personas mayores de 27 años.\n";

    // std::find_if para buscar a alguien con 30 años
    auto it = std::find_if(edades.begin(), edades.end(), [](const auto& par) {
        return par.second == 30;
    });

    if (it != edades.end()) {
        std::cout << it->first << " tiene 30 años.\n";
    } else {
        std::cout << "Nadie tiene 30 años.\n";
    }

    // all_of: ¿Todas las personas son mayores de 20 años?
    bool todos_mayores_20 = std::all_of(edades.begin(), edades.end(), [](const auto& par) {
        return par.second > 20;
    });
    std::cout << "Todas las personas son mayores de 20 años? " 
              << (todos_mayores_20 ? "Sí" : "No") << "\n";

    // any_of: ¿Hay alguien menor de 26 años?
    bool alguno_menor_26 = std::any_of(edades.begin(), edades.end(), [](const auto& par) {
        return par.second < 26;
    });
    std::cout << "Hay alguien menor de 26 años? " 
              << (alguno_menor_26 ? "Sí" : "No") << "\n";

    // none_of: ¿Nadie tiene exactamente 35 años?
    bool nadie_35 = std::none_of(edades.begin(), edades.end(), [](const auto& par) {
        return par.second == 35;
    });
    std::cout << "Nadie tiene 35 años? " 
              << (nadie_35 ? "Sí" : "No") << "\n";

    return 0;
}
