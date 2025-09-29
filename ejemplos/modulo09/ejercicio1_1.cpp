#include <fstream>

int main() {
    std::ofstream archivo("datos.txt");
    archivo << "Hola, archivo\n";
    // El archivo se cierra automáticamente al salir del bloque
    return 0;
}
