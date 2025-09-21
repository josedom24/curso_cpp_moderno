#include <iostream>
#include <string>

// Función que escribe el texto centrado en 80 columnas
void EscribirCentrado(const std::string& texto) {
    const int anchoPantalla = 80;
    int longitudTexto = static_cast<int>(texto.length());

    // Calcular espacios antes del texto para centrarlo
    int espacios = (anchoPantalla - longitudTexto) / 2;
    if (espacios < 0) espacios = 0;  // En caso de texto más largo que 80, no poner espacios negativos

    // Imprimir espacios y el texto
    std::cout << std::string(espacios, ' ') << texto << '\n';

    // Imprimir línea con '=' debajo, con la misma longitud que el texto
    std::cout << std::string(espacios, ' ') << std::string(longitudTexto, '=') << '\n';
}

int main() {
    std::string mensaje;

    std::cout << "Introduce un texto para centrar: ";
    std::getline(std::cin, mensaje);

    EscribirCentrado(mensaje);

    return 0;
}
