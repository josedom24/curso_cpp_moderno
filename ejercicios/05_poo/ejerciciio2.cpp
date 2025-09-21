#include <iostream>
#include <string>

// Clase Fecha
class Fecha {
private:
    int dia;
    int mes;
    int anio;

public:
    // Constructor con inicialización uniforme
    Fecha(int dia, int mes, int anio)
        : dia{dia}, mes{mes}, anio{anio} {}

    // Método para mostrar la fecha en formato dd/mm/aaaa
    void mostrar() const {
        std::cout << (dia < 10 ? "0" : "") << dia << "/"
                  << (mes < 10 ? "0" : "") << mes << "/"
                  << anio;
    }
};

// Clase Empleado
class Empleado {
private:
    std::string nombre;
    Fecha fechaIncorporacion; // Composición: un Empleado "tiene una" Fecha

public:
    // Constructor con inicialización uniforme
    Empleado(const std::string& nombre, const Fecha& fecha)
        : nombre{nombre}, fechaIncorporacion{fecha} {}

    // Método para mostrar los datos del empleado
    void mostrar() const {
        std::cout << "Empleado: " << nombre << '\n';
        std::cout << "Fecha de incorporación: ";
        fechaIncorporacion.mostrar();
        std::cout << '\n';
    }

    // Destructor que indica destrucción del objeto
    ~Empleado() {
        std::cout << "Empleado \"" << nombre << "\" destruido.\n";
    }
};

int main() {
    // Creamos un objeto Fecha
    Fecha fecha{7, 7, 2025};

    // Creamos un Empleado con nombre y fecha de incorporación
    Empleado e{"Lucía Gómez", fecha};

    // Mostramos la información del empleado
    e.mostrar();

    // El destructor se invoca automáticamente al final de main()
    return 0;
}
