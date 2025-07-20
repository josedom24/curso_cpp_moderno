# Ejercicios con funciones

## Ejercicio 1

Define una función `EscribirCentrado`que reciba una cadena de texto como parámetro y lo imprima centrado en pantalla, asumiendo una anchura fija de 80 columnas. La función debe imprimir espacios antes del texto para centrarlo y, justo debajo, una línea con el carácter `=` que tenga la misma longitud que el texto.

## Ejercicio 2

Crea una función `bool EsMultiplo(int a, int b)` que devuelva `true` si `a` es múltiplo de `b`. En el programa principal, pide al usuario dos números enteros y utiliza esta función para indicar si alguno es múltiplo del otro.

## Ejercicio 3

Define una función `inline` llamada `CalcularMedia` que reciba dos valores `double` (temperatura máxima y mínima) y devuelva la temperatura media. El programa principal debe pedir el número de días y, para cada día, pedir las temperaturas máxima y mínima, calculando y mostrando la media usando esta función.

## Ejercicio 4

Crea una función `std::string ConvertirEspaciado(const std::string& texto)` que reciba un texto y devuelva una cadena nueva donde cada carácter esté separado por un espacio adicional. Por ejemplo, `"Hola"` se transformará en `"H o l a "`.

## Ejercicio 5

Define dos funciones:

1. `int CalcularMax(const std::vector<int>& valores)` que devuelva el valor máximo del vector.
2. `int CalcularMin(const std::vector<int>& valores)` que devuelva el valor mínimo del vector.

En el programa principal, lee números enteros desde teclado y añádelos a un vector hasta que el usuario decida parar (por ejemplo, introduciendo un valor especial como `-1`).

Después, llama a las funciones para obtener y mostrar el valor máximo y mínimo de los números introducidos.

## Ejercicio 6

Define una función:

* `double CalcularPromedio(const std::vector<double>& valores)`
  Recibe un vector de números reales y devuelve el promedio (media aritmética) de los valores.

En el programa principal:

* Pide al usuario que introduzca números reales hasta que introduzca un valor negativo (que no se incluirá en el cálculo).
* Calcula y muestra el promedio usando la función.


## Ejercicio 7

Crea una función recursiva `int CalcularMCD(int a, int b)` que calcule el máximo común divisor de dos enteros `a` y `b` usando el método de Euclides. El programa pedirá dos números y mostrará su MCD.

## Ejercicio 8

Define una función `constexpr int Potencia(int base, unsigned int exponente)` que calcule la potencia `base` elevado a `exponente` usando recursión. Comprueba su uso en tiempo de compilación y en tiempo de ejecución.

## Ejercicio 9

Dado un vector `std::vector<int>` con edades, utiliza expresiones lambda para contar cuántos elementos representan personas menores de edad (<18), adultas (18-64) y mayores (>=65). Muestra el conteo de cada grupo.

## Ejercicio 10

Define una estructura Fraccion que contenga un numerador y un denominador. Implementa las siguientes funciones:

* `leerFraccion()`: devuelve una fracción válida introducida por el usuario.
* `simplificar(Fraccion&)`: simplifica una fracción usando el MCD (usa una función mcd auxiliar).
* `sumar(Fraccion, Fraccion)`: devuelve la suma de dos fracciones.
* `escribirFraccion(const Fraccion&)`: imprime la fracción de forma simplificada.

Realiza un programa que permita sumar dos fracciones introducidas por el usuario y muestre el resultado.