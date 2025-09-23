#include <iostream>
#include <string>

// Clase base
class Empleado {
private:
    std::string nombre;
    int edad;
    double sueldo;
    std::string departamento;

public:
    Empleado() : nombre{""}, edad{0}, sueldo{0.0}, departamento{""} {}
    Empleado(const std::string& n, int e, double s, const std::string& d)
        : nombre{n}, edad{e}, sueldo{s}, departamento{d} {}

    void setNombre(const std::string& n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setSueldo(double s) { sueldo = s; }
    void setDepartamento(const std::string& d) { departamento = d; }

    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }
    double getSueldo() { return sueldo; }
    std::string getDepartamento() { return departamento; }

    double calcularBono() { return sueldo * 0.10; }
    double calcularSalarioAnual() { return sueldo * 12 + calcularBono(); }

    // Método virtual para polimorfismo
    virtual void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << "\nEdad: " << edad
                  << "\nSueldo mensual: " << sueldo
                  << "\nDepartamento: " << departamento
                  << "\nBono: " << calcularBono()
                  << "\nSalario anual: " << calcularSalarioAnual()
                  << "\n-------------------" << std::endl;
    }

    virtual ~Empleado() {}
};

// Clase derivada: EmpleadoTemporal
class EmpleadoTemporal : public Empleado {
private:
    int duracionContrato;

public:
    EmpleadoTemporal(const std::string& n, int e, double s, const std::string& d, int duracion)
        : Empleado{n, e, s, d}, duracionContrato{duracion} {}

    void setDuracionContrato(int duracion) { duracionContrato = duracion; }
    int getDuracionContrato() { return duracionContrato; }

    void mostrarInformacion() override {
        Empleado::mostrarInformacion();
        std::cout << "Duración del contrato: " << duracionContrato << " meses"
                  << "\n-------------------" << std::endl;
    }
};

// Clase derivada: EmpleadoFijo
class EmpleadoFijo : public Empleado {
private:
    std::string beneficios;

public:
    EmpleadoFijo(const std::string& n, int e, double s, const std::string& d, const std::string& b)
        : Empleado{n, e, s, d}, beneficios{b} {}

    void setBeneficios(const std::string& b) { beneficios = b; }
    std::string getBeneficios() { return beneficios; }

    void mostrarInformacion() override {
        Empleado::mostrarInformacion();
        std::cout << "Beneficios: " << beneficios
                  << "\n-------------------" << std::endl;
    }
};

int main() {
    EmpleadoTemporal temp("Ana", 30, 2500, "Ventas", 12);
    EmpleadoFijo fijo("Luis", 40, 4000, "Marketing", "Seguro médico");

    // Polimorfismo usando referencias a la clase base
    Empleado& ref1 = temp;
    Empleado& ref2 = fijo;

    ref1.mostrarInformacion(); // Llama a EmpleadoTemporal::mostrarInformacion
    ref2.mostrarInformacion(); // Llama a EmpleadoFijo::mostrarInformacion

    return 0;
}
