#include <iostream>
#include <fstream>

int main() {
    try {
        std::ofstream archivo("datos.bin", std::ios::binary);
        archivo.exceptions(std::ofstream::failbit | std::ofstream::badbit);

        int numeros[] = {10, 20, 30, 40, 50};
        archivo.write(reinterpret_cast<const char*>(numeros), sizeof(numeros));

        std::cout << "Datos escritos correctamente en datos.bin\n";

    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al escribir en el archivo binario: " << e.what() << '\n';
    }

    return 0;
}
