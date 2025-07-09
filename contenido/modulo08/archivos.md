# Introducción al trabajo con archivos

En la mayoría de programas reales, el trabajo con archivos es una necesidad común: guardar datos, leer configuraciones, procesar información externa, generar informes, etc. En esta sección introduciremos los fundamentos del trabajo con archivos en C++, qué son y cómo se gestionan correctamente en el paradigma moderno del lenguaje.

Un **archivo** es una colección de datos almacenados en un medio persistente (habitualmente el disco), que puede ser **leído** o **escrito** por un programa. En el contexto de la programación, los archivos sirven como un mecanismo para:

* **Guardar información** más allá de la ejecución del programa.
* **Leer datos** producidos por otros programas o por el usuario.
* **Intercambiar información** entre aplicaciones.

Los archivos pueden clasificarse de varias formas, pero desde el punto de vista de C++, nos interesan principalmente:

1. **Archivos de texto** (`.txt`, `.csv`, `.xml`, `.json`, etc.):

   * Contienen caracteres legibles por humanos.
   * Se pueden abrir con un editor de texto.
   * Usualmente se leen y escriben línea por línea o carácter por carácter.

2. **Archivos binarios** (`.dat`, `.bin`, etc.):

   * Contienen datos codificados en forma binaria (no legibles directamente).
   * Se usan para almacenar estructuras complejas de forma más compacta o eficiente.
   * Requieren lectura y escritura en bloques de memoria.


## Los archivos como recurso

Desde la perspectiva de la programación moderna en C++, un **archivo es un recurso externo** al programa. Al igual que la memoria dinámica, los sockets o los hilos, debe ser:

* **Solicitado** (abierto).
* **Usado** (leer o escribir).
* **Liberado** (cerrado).

Una gestión incorrecta de archivos puede producir:

* **Fugas de recursos** (archivos abiertos que nunca se cierran).
* **Bloqueos** (otro programa no puede acceder al archivo porque no fue cerrado correctamente).
* **Corrupción de datos** (escritura incompleta).

Esto hace que el trabajo con archivos esté estrechamente relacionado con los mecanismos de **RAII** y **excepciones**, dos pilares del diseño seguro en C++ moderno.

## RAII y archivos

**RAII** (*Resource Acquisition Is Initialization*) es un principio de diseño donde la gestión de un recurso se asocia al ciclo de vida de un objeto. En el caso de archivos, esto significa que **abrir y cerrar archivos se hace automáticamente** mediante objetos que lo manejan.

En C++, la biblioteca estándar ofrece las clases:

* `std::ifstream` (input file stream): para **leer** archivos.
* `std::ofstream` (output file stream): para **escribir** archivos.
* `std::fstream` (file stream): para leer y escribir al mismo tiempo.

Estas clases abren el archivo al construirse, y lo **cierran automáticamente al destruirse**, lo que garantiza una gestión segura del recurso.

```cpp
#include <fstream>

int main() {
    std::ofstream archivo("datos.txt");
    archivo << "Hola, archivo\n";
    // El archivo se cierra automáticamente al salir del bloque
}
```

Aquí, `archivo` se destruye automáticamente al final de `main()`, y su destructor cierra el archivo correctamente. No hace falta llamar a `archivo.close()`.


## Excepciones y archivos

Abrir o manipular un archivo puede fallar por muchos motivos:

* El archivo no existe.
* No tenemos permisos.
* El disco está lleno o dañado.
* El archivo está en uso por otro proceso.

Por eso, el trabajo con archivos también **puede lanzar excepciones**, especialmente si se configura el flujo para que lo haga:

```cpp
#include <fstream>
#include <iostream>

int main() {
    std::ifstream archivo;
    archivo.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try {
        archivo.open("inexistente.txt");
        std::string linea;
        std::getline(archivo, linea);
        std::cout << linea << '\n';
    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error al trabajar con archivos: " << e.what() << '\n';
    }
}
```

* Configuramos el objeto `archivo` (de tipo `std::ifstream`) para que **lance excepciones** automáticamente si ocurre un error durante las operaciones con archivos. Se indican dos **flags** (banderas) que indican estados de error en los flujos de entrada/salida (`std::ifstream`, `std::ofstream`, `std::fstream`):
    * `std::ios::failbit`:  Se activa cuando ocurre un error lógico, por ejemplo:
        * Intentar leer un número donde hay texto.
        * No poder abrir un archivo (aunque el sistema de archivos esté bien).
        * Formato de datos inesperado.
    * `std::ios::badbit`: Se activa cuando ocurre un error **grave** o de bajo nivel:
        * Fallo del sistema de archivos.
        * Pérdida de integridad del flujo.
        * Errores en el hardware.
    Ambos **no lanzan excepciones por defecto**, sino que dejan el flujo en un estado de error que debes comprobar manualmente (con `fail()`, `bad()`, etc.). `exceptions(...)` **activa** el lanzamiento automático de una excepción si el flujo entra en uno de los estados de error especificados.
* Si no usamos excepciones, el control de errores sería de esta manera:

    ```cpp
    std::ifstream archivo("archivo.txt");
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir archivo\n";
    }
    ```

    O después de una operación:

    ```cpp
    int numero;
    archivo >> numero;
    if (archivo.fail()) {
        std::cerr << "Error al leer el número\n";
    }
    ```
* Si el archivo no puede abrirse, se lanza una excepción de tipo `std::ios_base::failure`.
* Capturamos esa excepción y mostramos un mensaje apropiado.

Este mecanismo permite integrar el trabajo con archivos dentro de un sistema general de manejo de errores basado en **excepciones**, lo cual hace nuestro código más robusto y claro.

