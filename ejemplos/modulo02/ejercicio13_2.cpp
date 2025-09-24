#include <iostream>
#include <string>

// Definición de un struct llamado Libro
struct Libro {
    std::string titulo;    // Título del libro
    std::string autor;     // Autor del libro
    int paginas;           // Número de páginas
};

int main() {
    // Declaración de una variable de tipo Libro
    Libro libro1;

    // Asignación de valores a los miembros usando el operador punto (.)
    libro1.titulo = "Cien años de soledad";
    libro1.autor = "Gabriel García Márquez";
    libro1.paginas = 417;

    // Mostrar la información del libro en consola
    std::cout << "Título: " << libro1.titulo << std::endl;
    std::cout << "Autor: " << libro1.autor << std::endl;
    std::cout << "Número de páginas: " << libro1.paginas << std::endl;

    // Inicialización uniforme de un struct
    Libro libro2{"Don Quijote de la Mancha", "Miguel de Cervantes", 863};

    std::cout << "\nTítulo: " << libro2.titulo << std::endl;
    std::cout << "Autor: " << libro2.autor << std::endl;
    std::cout << "Número de páginas: " << libro2.paginas << std::endl;

    return 0;
}
