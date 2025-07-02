# Curso de Introducción a C++ Moderno

1. Fundamentos de la programación

    * ¿Qué es un lenguaje de programación?
    * Introducción a C++: historia y evolución
    * ¿Qué es C++ moderno? (C++11, C++14, C++17, C++20)
    * Instalación de C++
    * [Estructura de un programa en C++](contenido/modulo01/estructura.md)
    * Cómo compilar y ejecutar programas (VS Code, terminal)

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
    * Ejercicios estructuras alternativas
    * [Estructuras repetitivas: while](contenido/modulo03/while.md)
    * [Estructuras repetitivas: do-while](contenido/modulo03/dowhile.md)
    * [Estructuras repetitivas: for](contenido/modulo03/for.md)
    * [Uso específico de variables: contadores, acumuladores e indicadores](contenido/modulo03/variables.md)
    * Ejercicios estructuras repetitivas

4. Gestión de recursos y punteros

    * Introducción a la gestión de recursos
    * Punteros y referencias
    * Punteros inteligentes
    * RAII (Resource Acquisition Is Initialization)
    * Propiedad de los recursos y gestión automática


5. Programación estructurada

    * Definición y declaración de funciones
    * Paso de argumentos a funciones
    * Valores de retorno de una función
    * Parámetros con valores por defecto y constexpr
    * Funciones inline y expresiones lambda básicas 
    * Recursividad

6. Tipos de datos compuestos

    * Cadenas de caracteres: `std::string`
    * Arreglos: `std::array`
    * Vectores: `std::vector`
    * Listas: `std::list`
    * conjuntos: `std::set`y `std::unordered_set`
    * Mapas: `std::map` y `std::unordered_map`
    * Enumeraciones `enum`
    * Estructuras: `struct`


7. Programación orientada a objetos

    * Clases y objetos en C++
    * Constructores y destructores
    * Encapsulamiento (public, private, protected)
    * Métodos const, this, inicialización con member initializer list
    * std::unique_ptr y RAII

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

