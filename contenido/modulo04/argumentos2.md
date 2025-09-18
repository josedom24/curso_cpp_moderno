# Ejemplos de paso de parámetros a funciones

## Definición de parámetros opcionales

En ocasiones, una función puede tener **valores predeterminados** para algunos de sus parámetros. Esto permite que el programador pueda **omitir esos argumentos** al llamar a la función, y en su lugar se utilizará un valor por defecto.

Para declarar un parámetro opcional, se asigna un **valor por defecto** en la declaración de la función, veamos un ejemplo:

```cpp
#include <iostream>
#include <string>

void saludar(std::string nombre = "Usuario") {
    std::cout << "Hola, " << nombre << std::endl;
}

int main() {
    saludar("Carlos"); // Imprime: Hola, Carlos
    saludar();         // Imprime: Hola, Usuario
}
```

* Los **parámetros opcionales deben ir al final** de la lista de parámetros.
* Los valores por defecto se especifican en la **declaración** o **definición** de la función, pero nunca en ambas.
* Si se omite un argumento al llamar a la función, se utilizará el valor por defecto especificado.
* Los parámetros opcionales pueden ser de **cualquier tipo**, incluyendo tipos primitivos, objetos de la STL, o incluso punteros.
* os parámetros opcionales siguen las mismas reglas sobre **paso por valor**, **referencia**, o **referencia constante**, según sea necesario para evitar copias costosas y gestionar los recursos de forma eficiente.

Ejemplo con varios parámetros opcionales:

```cpp
void imprimirLinea(std::string texto = "Línea vacía", char simbolo = '-', int repeticiones = 10) {
    std::cout << texto << " ";
    for (int i = 0; i < repeticiones; ++i) {
        std::cout << simbolo;
    }
    std::cout << std::endl;
}

int main() {
    imprimirLinea("Título", '*', 20); // Personalizado
    imprimirLinea("Subtítulo");       // Usa los valores por defecto de 'simbolo' y 'repeticiones'
    imprimirLinea();                  // Usa todos los valores por defecto
}
```

## Envío de un `struct` a una función

Los `struct` pueden pasarse a funciones como cualquier otro tipo de dato. Dependiendo de si se pasa por **valor** o por **referencia**, se puede modificar su contenido o no. Ejemplo:

```cpp
#include <iostream>

struct Rectangulo {
    double ancho;
    double alto;
};

void mostrarRectangulo(const Rectangulo& r) {
    std::cout << "Ancho: " << r.ancho << ", Alto: " << r.alto << std::endl;
}

void redimensionarRectangulo(Rectangulo& r, double nuevoAncho, double nuevoAlto) {
    r.ancho = nuevoAncho;
    r.alto = nuevoAlto;
}

int main() {
    Rectangulo r{5.0, 3.0};
    mostrarRectangulo(r);

    redimensionarRectangulo(r, 8.0, 4.5);
    std::cout << "Después de redimensionar:" << std::endl;
    mostrarRectangulo(r);

    return 0;
}
```
* Para evitar copias innecesarias, se suele pasar el `struct` por **referencia**.
* Si la función no debe modificar el `struct`, se declara como `const Rectangulo&`.
* Si la función debe modificar el `struct`, se pasa como `Rectangulo&`.

