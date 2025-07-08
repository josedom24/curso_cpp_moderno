#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Clase base: Curso
class Curso {
private:
    std::string titulo;

public:
    // Constructor con inicialización uniforme
    Curso(const std::string& titulo) : titulo{titulo} {}

    // Método virtual para descripción del curso
    virtual void describir() const {
        std::cout << "Curso general: " << titulo << '\n';
    }

    // Método virtual para obtener el costo
    virtual double costo() const {
        return 0.0; // Por defecto
    }

    // Destructor virtual para asegurar destrucción adecuada
    virtual ~Curso() = default;

protected:
    // Método protegido para que las clases derivadas accedan al título
    const std::string& getTitulo() const {
        return titulo;
    }
};

// Clase derivada: CursoPresencial
class CursoPresencial : public Curso {
private:
    std::string aula;

public:
    // Constructor con inicialización uniforme
    CursoPresencial(const std::string& titulo, const std::string& aula)
        : Curso{titulo}, aula{aula} {}

    void describir() const override {
        std::cout << "Curso presencial en aula " << aula
                  << ": " << getTitulo() << '\n';
    }

    double costo() const override {
        return 200.0;
    }
};

// Clase derivada: CursoEnLinea
class CursoEnLinea : public Curso {
private:
    std::string plataforma;

public:
    // Constructor con inicialización uniforme
    CursoEnLinea(const std::string& titulo, const std::string& plataforma)
        : Curso{titulo}, plataforma{plataforma} {}

    void describir() const override {
        std::cout << "Curso en línea en " << plataforma
                  << ": " << getTitulo() << '\n';
    }

    double costo() const override {
        return 100.0;
    }
};

// Función auxiliar para mostrar la información de cualquier curso
void mostrarInformacionCurso(const Curso& curso) {
    curso.describir();
    std::cout << "Costo: " << curso.costo() << " euros\n\n";
}

// Función principal
int main() {
    std::vector<std::unique_ptr<Curso>> cursos;

    // Agregamos cursos de distintos tipos usando polimorfismo
    cursos.emplace_back(std::make_unique<CursoPresencial>("Programación C++", "B203"));
    cursos.emplace_back(std::make_unique<CursoEnLinea>("Introducción a Python", "Udemy"));
    cursos.emplace_back(std::make_unique<CursoPresencial>("Estructuras de Datos", "A101"));
    cursos.emplace_back(std::make_unique<CursoEnLinea>("Diseño de Interfaces", "Coursera"));

    // Mostramos la información de todos los cursos
    for (const auto& curso : cursos) {
        mostrarInformacionCurso(*curso);
    }

    return 0;
}
