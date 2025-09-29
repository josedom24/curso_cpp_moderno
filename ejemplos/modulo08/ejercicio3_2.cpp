#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

int main() {
    try {
        std::vector<int> v = {1, 2, 3};

        // Acceso fuera de rango: lanza std::out_of_range
        int x = v.at(10);

        // Conversión inválida: lanza std::invalid_argument o std::out_of_range
        int numero = std::stoi("abc");

    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción por acceso fuera de rango: " << e.what() << '\n';

    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepción por argumento inválido: " << e.what() << '\n';

    } catch (const std::exception& e) {
        std::cerr << "Excepción genérica capturada: " << e.what() << '\n';
    }

    std::cout << "Programa finalizado.\n";
    return 0;
}
