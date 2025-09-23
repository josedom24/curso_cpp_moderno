#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    int edad;
    double sueldo;
    std::string departamento;

    // Atributo estático: cuenta todos los empleados creados
    static int contadorEmpleados;

public:
    // Constructor por defecto usando lista de inicialización
    Empleado() 
        : nombre{""}, edad{0}, sueldo{0.0}, departamento{""} 
    {
        contadorEmpleados++;
    }

    // Constructor con parámetros usando lista de inicialización
    Empleado(const std::string& n, int e, double s, const std::string& d) 
        : nombre{n}, edad{e}, sueldo{s}, departamento{d} 
    {
        contadorEmpleados++;
    }

    // Setters
    void setNombre(const std::string& n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setSueldo(double s) { sueldo = s; }
    void setDepartamento(const std::string& d) { departamento = d; }

    // Getters
    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }
    double getSueldo() { return sueldo; }
    std::string getDepartamento() { return departamento; }

    // Métodos de cálculo
    double calcularBono() { return sueldo * 0.10; }
    double calcularSalarioAnual() { return sueldo * 12 + calcularBono(); }

    // Método para mostrar información
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Sueldo mensual: " << sueldo << std::endl;
        std::cout << "Departamento: " << departamento << std::endl;
        std::cout << "Bono: " << calcularBono() << std::endl;
        std::cout << "Salario anual: " << calcularSalarioAnual() << std::endl;
        std::cout << "---------------------------" << std::endl;
    }

    // Método estático para obtener el total de empleados
    static int totalEmpleados() { return contadorEmpleados; }
};

// Inicialización del atributo estático
int Empleado::contadorEmpleados = 0;

int main() {
    // Crear empleados
    Empleado emp1;
    emp1.setNombre("Ana");
    emp1.setEdad(30);
    emp1.setSueldo(2500);
    emp1.setDepartamento("Ventas");

    Empleado emp2("Luis", 40, 4000, "Marketing");
    Empleado emp3("Carla", 28, 3200, "Finanzas");

    // Mostrar información de cada empleado
    emp1.mostrarInformacion();
    emp2.mostrarInformacion();
    emp3.mostrarInformacion();

    // Mostrar el total de empleados creados usando el método estático
    std::cout << "Total de empleados creados: " << Empleado::totalEmpleados() << std::endl;

    return 0;
}
