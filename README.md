# Curso de Introducción a C++ Moderno

1. Fundamentos de la programación

    * ¿Qué es un lenguaje de programación?
    * Introducción a C++: historia y evolución
    * ¿Qué es C++ moderno? (C++11, C++14, C++17, C++20)
    * [Instalación de un entorno de desarrollo para C++](contenido/modulo01/instalacion.md)
    * [Estructura de un programa en C++](contenido/modulo01/estructura.md)
    * [Cómo compilar y ejecutar programas](contenido/modulo01/compilacion.md)

2.  Tipos de datos básicos

    * [Tipos de datos fundamentales](contenido/modulo02/tipos.md)
    * [Tipos de datos carácter y booleano](contenido/modulo02/caracter_bool.md)
    * [Tipos de datos numéricos y operaciones aritméticas](contenido/modulo02/numeros.md)
    * [Declaración e inicialización de variables](contenido/modulo02/variables.md)
    * [Declaración e inicialización de constantes](contenido/modulo02/constantes.md)
    * [Conversión de tipos de datos](contenido/modulo02/casting.md)
    * [Introducción a las cadenas de caracteres](contenido/modulo02/cadenas.md)
    * [Conversión de cadenas de caracteres](contenido/modulo02/casting_cadenas.md)
    * [Entrada y salida estándar](contenido/modulo02/entrada_salida.md)
    * [Ejercicios estructura secuencial](contenido/modulo02/secuencial.md)

3. Control de flujo

    * [Operadores relacionales y lógicos](contenido/modulo03/operadores.md)
    * [Estructuras alternativas: if](contenido/modulo03/if.md)
    * [Estructuras alternativas: switch](contenido/modulo03/switch.md)
    * [Ejercicios estructuras alternativas](contenido/modulo03/alternativa.md)
    * [Estructuras repetitivas: while](contenido/modulo03/while.md)
    * [Estructuras repetitivas: do-while](contenido/modulo03/dowhile.md)
    * [Estructuras repetitivas: for](contenido/modulo03/for.md)
    * [Uso específico de variables: contadores, acumuladores e indicadores](contenido/modulo03/variables.md)
    * [Ejercicios estructuras repetitivas](contenido/modulo03/repetitiva.md)

4. Gestión de recursos

    * [Introducción a la gestión de recursos](contenido/modulo04/introduccion.md)
    * [Gestión manual de memoria](contenido/modulo04/memoria.md)
    * [Gestión de memoria con punteros](contenido/modulo04/punteros.md)
    * [Gestión de memoria con referencias](contenido/modulo04/referencias.md)
    * [Propiedad de recursos y patrón RAII](contenido/modulo04/raii.md)
    * [Gestión de memoria con punteros inteligentes](contenido/modulo04/propiedad.md)

5. Programación estructurada

    * [Introducción a la programación estructurada y uso de funciones](contenido/modulo05/funciones.md)
    * [Paso de argumentos a funciones](contenido/modulo05/argumentos.md)
    * [Valores de retorno de una función](contenido/modulo05/retorno.md)
    * [Ámbito y duración de las variables en funciones](contenido/modulo05/ambito.md)
    * [Tipos de funciones: constexpr, inline, lambda y recursivas](contenido/modulo05/tipos.md)
    * [Ejercicios con funciones](contenido/modulo05/ejercicios.md)

6. Tipos de datos compuestos

    * [Tipos definidos por el usuario: `enum class`](contenido/modulo06/enum.md)
    * [Tipos definidos por el usuario: `struct`](contenido/modulo06/struct.md)
    * [Cadenas de caracteres: `std::string`](contenido/modulo06/string.md)
    * [Arreglos: `std::array`](contenido/modulo06/array.md)
    * [Vectores: `std::vector`](contenido/modulo06/vector.md)
    * [Listas: `std::list`](contenido/modulo06/list.md)
    * [Mapas: `std::map` y `std::unordered_map`](contenido/modulo06/map.md)
    * [Algoritmos de la Biblioteca Estándar de C++](contenido/modulo06/algoritmos.md)
    * [Ejercicios con `std::string`](contenido/modulo06/ejercicios_string.md)
    * [Ejercicios con `std::array`](contenido/modulo06/ejercicios_array.md)
    * [Ejercicios con `std::vector`](contenido/modulo06/ejercicios_vector.md)
    * [Ejercicios con `std::list`](contenido/modulo06/ejercicios_list.md)
    * [Ejercicios con `std::map` y `std::unordered_map`](contenido/modulo06/ejercicios_map.md)
    

7. Programación orientada a objeto/

    * [Introducción a la Programación Orientada a Objetos](contenido/modulo07/introduccion.md)
    * [Definición de clases y creación de objetos](contenido/modulo07/poo_c++.md)
    * [Constructores, destructores y métodos constantes](contenido/modulo07/constructor.md)
    * [Composición de Objetos](contenido/modulo07/composicion.md)
    * [Herencia y polimorfismo](contenido/modulo07/herencia.md)
    * [Ejercicios de programación orientada a objetos](contenido/modulo07/ejercicios.md)


8. Excepciones y trabajo con archivos
    * Introducción a las excepciones
    * Introducción al trabajo con archivos
    * Apertura, lectura y escritura de archivos
    * Ejercicios con archivos
---

Otros temas:

1. Funciones avanzadas y plantillas

    * Sobrecarga de funciones
    * Plantillas (template<class T>)
    * Introducción a std::function y lambdas más complejas
    * constexpr y inline en funciones genéricas

2. Manejo de errores y depuración

    * Errores comunes de compilación y lógica
    * Uso de assert y static_assert
    * Excepciones (try, catch, throw)
    * Buenas prácticas: evitar new/delete, usar std::vector y std::unique_ptr

3. C++ moderno en acción (proyecto final)


Sugerencia para el contenido del módulo 8 combinado:

Introducción a ficheros (ifstream, ofstream, fstream)

Apertura, lectura y escritura de archivos

Comprobación de errores en apertura y lectura

Manejo básico de errores con condicionales y assert

Introducción ligera a excepciones (try-catch) aplicadas a operaciones con archivos

Ejercicios prácticos que incluyan lectura/escritura y control de errores