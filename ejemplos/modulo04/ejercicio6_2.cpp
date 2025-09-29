#include <iostream>
#include <string>

// Función que imprime una línea decorada
void imprimirLinea(std::string texto = "Línea vacía", char simbolo = '-', int repeticiones = 10) {
    std::cout << texto << " ";
    for (int i = 0; i < repeticiones; ++i) {
        std::cout << simbolo;
    }
    std::cout << std::endl;
}

int main() {
    // Llamada con todos los parámetros personalizados
    imprimirLinea("Título", '*', 20); // Imprime: Título ********************

    // Llamada con valores por defecto de 'simbolo' y 'repeticiones'
    imprimirLinea("Subtítulo");       // Imprime: Subtítulo ----------

    // Llamada con todos los valores por defecto
    imprimirLinea();                  // Imprime: Línea vacía ----------

    return 0;
}
