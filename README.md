# Curso de Introducción a C++ Moderno

1. Fundamentos de la programación

    * ¿Qué es un lenguaje de programación?
    * Introducción a C++: historia y evolución
    * ¿Qué es C++ moderno? (C++11, C++14, C++17, C++20)
    * Instalación de C++
    * [Estructura de un programa en C++](modulo01/estructura.md)
    * Cómo compilar y ejecutar programas (VS Code, terminal)

2. Variables, tipos y entrada/salida

    * Tipos de datos fundamentales (int, double, bool, char)
    * Variables modernas (auto, inicialización uniforme {})
    * Entrada/salida con std::cin y std::cout
    * Comentarios y buenas prácticas

3. Operadores y control de flujo

    * Operadores aritméticos, lógicos y de comparación
    * if, else, else if
    * switch, break, continue
    * Bucles: for, while, do while
    * Uso de range-based for (C++11)

4. Funciones y modularidad

    * Declaración y definición de funciones
    * Paso de parámetros (por valor, referencia y const)
    * Valores de retorno (return, void)
    * default y constexpr (C++11)
    * Funciones inline y lambdas simples (C++11)
5. Estructuras de datos básicas

    * Arreglos (std::array, std::vector)
    * Strings (std::string, std::string_view)
    * Uso de std::vector en lugar de arrays tradicionales
    * Iteración con auto y range-based for

6. Programación orientada a objetos

    * Clases y objetos en C++
    * Constructores y destructores
    * Encapsulamiento (public, private, protected)
    * Métodos const, this, inicialización con member initializer list
    * std::unique_ptr y RAII

7. Funciones avanzadas y plantillas

    * Sobrecarga de funciones
    * Plantillas (template<class T>)
    * Introducción a std::function y lambdas más complejas
    * constexpr y inline en funciones genéricas

8. Manejo de errores y depuración

    * Errores comunes de compilación y lógica
    * Uso de assert y static_assert
    * Excepciones (try, catch, throw)
    * Buenas prácticas: evitar new/delete, usar std::vector y std::unique_ptr

9. C++ moderno en acción (proyecto final)

Proyecto simple: calculadora, gestor de tareas o juego de consola
Aplicación de todo lo aprendido: funciones, clases, vectores, errores
Opcional: introducir pruebas con assert o incluso doctest


🧠 Enfoque metodológico recomendado

✅ Enfócate en ejemplos visuales y prácticos (sin teoría excesiva).
✅ Usa std::vector, auto, y const desde el principio.
✅ Evita using namespace std; globalmente.
❌ No enseñes punteros crudos ( * y new/delete) hasta que entiendan RAII o unique_ptr.
✅ Refuerza la comprensión con mini ejercicios en cada clase.


