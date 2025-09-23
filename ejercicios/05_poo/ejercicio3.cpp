#include <iostream>
#include <string>

// Clase Fecha
class Fecha {
private:
    int dia;
    int mes;
    int anio;

public:
    // Constructor por defecto
    Fecha() : dia{1}, mes{1}, anio{2000} {}

    // Constructor con parámetros
    Fecha(int d, int m, int a) : dia{d}, mes{m}, anio{a} {}

    // Setters
    void setDia(int d) { dia = d; }
    void setMes(int m) { mes = m; }
    void setAnio(int a) { anio = a; }

    // Getters
    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAnio() { return anio; }

    // Método para mostrar la fecha
    void mostrar() {
        std::cout << (dia < 10 ? "0" : "") << dia << "/"
                  << (mes < 10 ? "0" : "") << mes << "/"
                  << anio;
    }
};

// Clase Empleado con composición de Fecha
class Empleado {
private:
    std::string nombre;
    int edad;
    double sueldo;
    std::string departamento;
    Fecha fechaIncorporacion; // Composición: un empleado tiene una fecha de incorporación

    // Atributo estático
    static int contadorEmpleados;

public:
    // Constructor por defecto
    Empleado()
        : nombre{""}, edad{0}, sueldo{0.0}, departamento{""}, fechaIncorporacion{} 
    {
        contadorEmpleados++;
    }

    // Constructor con parámetros
    Empleado(const std::string& n, int e, double s, const std::string& d, const Fecha& f)
        : nombre{n}, edad{e}, sueldo{s}, departamento{d}, fechaIncorporacion{f} 
    {
        contadorEmpleados++;
    }

    // Setters
    void setNombre(const std::string& n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setSueldo(double s) { sueldo = s; }
    void setDepartamento(const std::string& d) { departamento = d; }
    void setFechaIncorporacion(const Fecha& f) { fechaIncorporacion = f; }

    // Getters
    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }
    double getSueldo() { return sueldo; }
    std::string getDepartamento() { return departamento; }
    Fecha getFechaIncorporacion() { return fechaIncorporacion; }

    // Métodos de cálculo
    double calcularBono() { return sueldo * 0.10; }
    double calcularSalarioAnual() { return sueldo * 12 + calcularBono(); }

    // Mostrar información
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Sueldo mensual: " << sueldo << std::endl;
        std::cout << "Departamento: " << departamento << std::endl;
        std::cout << "Fecha de incorporación: ";
        fechaIncorporacion.mostrar();
        std::cout << std::endl;
        std::cout << "Bono: " << calcularBono() << std::endl;
        std::cout << "Salario anual: " << calcularSalarioAnual() << std::endl;
        std::cout << "---------------------------" << std::endl;
    }

    // Método estático
    static int totalEmpleados() { return contadorEmpleados; }
};

// Inicialización del atributo estático
int Empleado::contadorEmpleados = 0;

int main() {
    // Crear empleados con fechas de incorporación
    Fecha f1(15, 3, 2020);
    Fecha f2(1, 7, 2018);
    Fecha f3(10, 11, 2022);

    Empleado emp1("Ana", 30, 2500, "Ventas", f1);
    Empleado emp2("Luis", 40, 4000, "Marketing", f2);
    Empleado emp3("Carla", 28, 3200, "Finanzas", f3);

    // Mostrar información
    emp1.mostrarInformacion();
    emp2.mostrarInformacion();
    emp3.mostrarInformacion();

    // Mostrar total de empleados
    std::cout << "Total de empleados creados: " << Empleado::totalEmpleados() << std::endl;

    return 0;
}
