#include <iostream>
#include <string>

class Coche {
private:
    std::string marca;
    std::string modelo;
    int anio;

public:
    // Setter para la marca
    void setMarca(const std::string& m) {
        marca = m;
    }

    // Getter para la marca
    std::string getMarca() const {
        return marca;
    }

    // Setter para el modelo
    void setModelo(const std::string& mod) {
        modelo = mod;
    }

    // Getter para el modelo
    std::string getModelo() const {
        return modelo;
    }

    // Setter para el año (con validación)
    void setAnio(int a) {
        if (a > 1885) { // Primer automóvil se inventó alrededor de 1886
            anio = a;
        } else {
            std::cout << "Año no válido. Debe ser mayor a 1885." << std::endl;
        }
    }

    // Getter para el año
    int getAnio() const {
        return anio;
    }

    // Método para mostrar la información del coche
    void mostrarInformacion() const {
        std::cout << "Marca: " << marca 
                  << ", Modelo: " << modelo 
                  << ", Año: " << anio << std::endl;
    }
};

int main() {
    Coche coche1;

    // Inicialización de los atributos usando setters
    coche1.setMarca("Toyota");
    coche1.setModelo("Corolla");
    coche1.setAnio(2020);

    // Mostrar información usando un método
    coche1.mostrarInformacion();

    // Ejemplo de uso de getters
    std::cout << "La marca del coche es: " << coche1.getMarca() << std::endl;

    return 0;
}
