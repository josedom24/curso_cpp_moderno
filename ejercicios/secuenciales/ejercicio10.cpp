#include <iostream>

int main() {
    double parcial1 {0.0};
    double parcial2 {0.0};
    double parcial3 {0.0};
    double examen_final {0.0};
    double trabajo_final {0.0};

    constexpr double peso_parciales {0.55};
    constexpr double peso_examen {0.30};
    constexpr double peso_trabajo {0.15};

    std::cout << "Introduce la calificación del parcial 1: ";
    std::cin >> parcial1;
    std::cout << "Introduce la calificación del parcial 2: ";
    std::cin >> parcial2;
    std::cout << "Introduce la calificación del parcial 3: ";
    std::cin >> parcial3;

    std::cout << "Introduce la calificación del examen final: ";
    std::cin >> examen_final;

    std::cout << "Introduce la calificación del trabajo final: ";
    std::cin >> trabajo_final;

    auto promedio_parciales = (parcial1 + parcial2 + parcial3) / 3.0;
    auto calificacion_final = (promedio_parciales * peso_parciales) + 
                             (examen_final * peso_examen) + 
                             (trabajo_final * peso_trabajo);

    std::cout << "La calificación final es: " << calificacion_final << std::endl;

    return 0;
}
