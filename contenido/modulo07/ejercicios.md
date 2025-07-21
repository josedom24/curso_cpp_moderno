# Ejercicios con plantillas de función

## Ejercicio 1: Comparador genérico

Implementa una función plantilla llamada `es_mayor` que reciba dos valores del mismo tipo y devuelva `true` si el primero es mayor que el segundo, y `false` en caso contrario. Usa la deducción de tipos para que la función funcione con `int`, `double`, `std::string`, etc.


## Ejercicio 2: Intercambio de valores

Escribe una función plantilla `intercambiar` que reciba dos referencias y las intercambie. Asegúrate de que la función sea genérica y funcione con tipos primitivos y objetos como `std::string`.


## Ejercicio 3: Suma acumulativa de contenedor

Implementa una función plantilla `sumar_elementos` que reciba un contenedor estándar (como `std::vector<T>`, `std::list<T>`, etc.) y devuelva la suma de sus elementos. La función debe deducir automáticamente el tipo de los elementos del contenedor y devolver el tipo adecuado.
