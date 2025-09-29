#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // Para funciones como ::tolower

int main() {
    std::string texto = "Algoritmo";

    // std::transform: Convertir todos los caracteres a minúsculas
    // Recibe el inicio y fin del rango de entrada, el inicio del rango de salida y la función que se ejecuta.
    std::transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    std::cout << "Texto en minúsculas: " << texto << std::endl;

    // std::sort: Ordenar los caracteres alfabéticamente
    std::sort(texto.begin(), texto.end());
    std::cout << "Texto ordenado: " << texto << std::endl;

    // std::reverse: Invertir el orden de los caracteres
    std::reverse(texto.begin(), texto.end());
    std::cout << "Texto invertido: " << texto << std::endl;

    // std::count: Contar cuántas veces aparece la letra 'o'
    int numO = std::count(texto.begin(), texto.end(), 'o');
    std::cout << "La letra 'o' aparece " << numO << " veces." << std::endl;

    // std::find: Buscar la letra 'a'
    auto it = std::find(texto.begin(), texto.end(), 'a');
    if (it != texto.end()) {
        std::cout << "La letra 'a' se encuentra en el texto." << std::endl;
    }

    // std::all_of: Comprobar si todos los caracteres son minúsculas
    if (std::all_of(texto.begin(), texto.end(), ::islower)) {
        std::cout << "Todos los caracteres son minúsculas." << std::endl;
    }

    // std::any_of: Comprobar si hay al menos una vocal
    if (std::any_of(texto.begin(), texto.end(), [](char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    })) {
        std::cout << "Hay al menos una vocal." << std::endl;
    }

    // std::none_of: Comprobar si no hay dígitos
    if (std::none_of(texto.begin(), texto.end(), ::isdigit)) {
        std::cout << "No hay dígitos en el texto." << std::endl;
    }
}
