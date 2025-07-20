
# Ámbito y duración de las variables en funciones

El **ámbito** de una variable define la región del código donde dicha variable es accesible.

## Variables locales:

* Se declaran dentro de una función o bloque `{}`.
* Solo son accesibles **dentro de la función o bloque** en el que se definen.
* Se crean cuando el flujo de ejecución entra en el ámbito y se destruyen automáticamente al salir. Es decir, su **duración** es automática.
* Los **parámetros de una función** en C++ **se comportan como variables locales**.
    * Cuando se pasa un parámetro por valor, se crea **una copia local**, independiente de la variable original.
    * Cuando se pasa por referencia o puntero, se accede directamente al valor original, pero el propio parámetro sigue siendo una variable local.

Ejemplo:

```cpp
#include <iostream>
#include <string>

void saludar(const std::string& nombre) {  // 'nombre' es un parámetro, pero se comporta como variable local
    int contador = 5;  // Variable local

    for (int i = 0; i < contador; ++i) {
        std::cout << "Hola, " << nombre << std::endl;
    }
    // Aquí se destruyen las variables locales: 'contador' e 'i'
}  // También se destruye 'nombre', que es un parámetro pero actúa como variable local

int main() {
    saludar("Carlos");  // Llamada a la función pasando "Carlos" como argumento
    return 0;
}
```
## Variables globales

* Se declaran **fuera de cualquier función o clase**, normalmente al inicio del archivo.
* Son accesibles desde cualquier función del mismo archivo (o de otros si se usa `extern`).
* Su duración es **todo el tiempo de ejecución del programa**.

Ejemplo:

```cpp
#include <iostream>

int global = 10;  // Variable global

void mostrarGlobal() {
    std::cout << "El valor de la variable global es: " << global << std::endl;
}

int main() {
    mostrarGlobal();  // Imprime el valor actual de 'global'

    global = 20;  // Modificamos el valor de la variable global

    mostrarGlobal();  // Imprime el nuevo valor de 'global'

    return 0;
}
```

* Si un recurso se asocia a una **variable local**, se libera automáticamente al salir del ámbito, siguiendo el principio **RAII**.
* Si se devuelve una referencia o puntero a una variable local, se produce un **error grave**, ya que la variable deja de existir al salir de la función.
* Las variables globales viven durante todo el programa, pero su uso inadecuado puede dificultar la gestión clara de los recursos.
