#include <iostream>
#include <map>
#include <string>

void mostrarNotas(const std::map<std::string, float>& notas) {
    for (const auto& [nombre, nota] : notas) {
        std::cout << nombre << ": " << nota << "\n";
    }
}

int main() {
    std::map<std::string, float> notas;
    std::string nombre;
    float nota;

    std::cout << "Introduce nombre de alumnos y calificación (escribe 'fin' como nombre para terminar):\n";
    while (true) {
        std::cout << "Alumno: ";
        std::getline(std::cin, nombre);
        if (nombre == "fin") break;

        std::cout << "Nota: ";
        std::cin >> nota;
        std::cin.ignore();

        notas[nombre] = nota;
    }

    std::cout << "Introduce el nombre del alumno a eliminar: ";
    std::getline(std::cin, nombre);

    if (notas.erase(nombre)) {
        std::cout << nombre << " eliminado correctamente.\n";
    } else {
        std::cout << nombre << " no se encuentra en la lista.\n";
    }

    std::cout << "\nLista final de calificaciones:\n";
    mostrarNotas(notas);

    return 0;
}
