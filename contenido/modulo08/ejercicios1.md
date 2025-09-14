# Ejercicios con excepciones

## Ejercicio 1: Acceso seguro a un vector

**Enunciado:**
Escribe un programa que intente acceder a un elemento de un `std::vector<int>` en una posición inválida. Captura la excepción generada y muestra un mensaje de error adecuado. Después del error, el programa debe continuar normalmente mostrando "Programa finalizado".

**Solución:**

```cpp
#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> datos = {10, 20, 30};

    try {
        // Acceso fuera de rango
        int valor = datos.at(5);
        std::cout << "Valor obtenido: " << valor << '\n';
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: acceso fuera de rango -> " << e.what() << '\n';
    }

    std::cout << "Programa finalizado.\n";
    return 0;
}
```

---

## Ejercicio 2: Conversión de cadena a número

**Enunciado:**
Escribe una función `convertirANumero` que reciba una cadena (`std::string`) y la convierta a entero usando `std::stoi`. Si la conversión falla, captura la excepción y devuelve `-1` como valor por defecto.

En `main`, prueba la función con `"123"` y con `"abc"`.

**Solución:**

```cpp
#include <iostream>
#include <string>
#include <stdexcept>

int convertirANumero(const std::string& texto) {
    try {
        return std::stoi(texto);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: argumento inválido -> " << e.what() << '\n';
        return -1;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: número fuera de rango -> " << e.what() << '\n';
        return -1;
    }
}

int main() {
    std::cout << "Resultado con '123': " << convertirANumero("123") << '\n';
    std::cout << "Resultado con 'abc': " << convertirANumero("abc") << '\n';
    return 0;
}
```

---

## Ejercicio 3: División segura con excepciones propias

**Enunciado:**
Implementa una función `dividir(int a, int b)` que lance una excepción `std::runtime_error` si el divisor es cero. En `main`, pide dos números al usuario, llama a la función y captura cualquier excepción mostrando el mensaje correspondiente.

**Solución:**

```cpp
#include <iostream>
#include <stdexcept>

int dividir(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Error: división por cero");
    }
    return a / b;
}

int main() {
    int x, y;
    std::cout << "Introduce dos números (a b): ";
    std::cin >> x >> y;

    try {
        int resultado = dividir(x, y);
        std::cout << "Resultado: " << resultado << '\n';
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Programa terminado.\n";
    return 0;
}
```

