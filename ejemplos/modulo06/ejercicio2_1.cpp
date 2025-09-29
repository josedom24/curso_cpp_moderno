#include <iostream>
#include <string>

int main() {
    std::string texto {"Hola Mundo"};

    // Longitud de la cadena
    std::cout << "Longitud: " << texto.length() << std::endl;

    // Acceso seguro al primer y último carácter
    std::cout << "Primer carácter: " << texto.front() << std::endl;
    std::cout << "Último carácter: " << texto.back() << std::endl;

    // Subcadena
    std::string subcadena = texto.substr(0, 4);
    std::cout << "Subcadena: " << subcadena << std::endl;

    // Búsqueda de una palabra
    size_t posicion = texto.find("Mundo");
    if (posicion != std::string::npos) {
        std::cout << "\"Mundo\" encontrado en la posición: " << posicion << std::endl;
    }

    // Reemplazo de texto
    texto.replace(5, 5, "ChatGPT");
    std::cout << "Texto modificado: " << texto << std::endl;

    // Concatenación con append
    texto.append("!");
    std::cout << "Texto final: " << texto << std::endl;

    // Comparación
    std::string otroTexto {"Hola ChatGPT!"};
    if (texto.compare(otroTexto) == 0) {
        std::cout << "Las cadenas son iguales." << std::endl;
    } else {
        std::cout << "Las cadenas son diferentes." << std::endl;
    }

    return 0;
}
