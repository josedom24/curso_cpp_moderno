# Plantillas de funciones

Las **plantillas de funciones** permiten definir funciones genéricas que pueden operar con diferentes tipos de datos sin necesidad de reescribir el código para cada tipo concreto. El compilador crea automáticamente instancias específicas de la función para cada tipo utilizado, lo que se conoce como **instanciación de plantilla**.

La sintaxis para declarar una plantilla de función es la siguiente:

```cpp
template <typename T>
TipoDeRetorno nombreFuncion(T parametro) {
    // cuerpo de la función
}
```

* La palabra clave `template` indica que lo que sigue es una plantilla.
* `typename T` declara un parámetro de tipo genérico `T`.
* La función `nombreFuncion` está definida para cualquier tipo `T`.

Veamos un ejemplo:

```cpp
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
```

Esta función devuelve el mayor de dos valores de cualquier tipo que soporte el operador `>`.

## Ejemplo completo

Veamos un ejemplo sencillo de plantilla de función que devuelve un `bool`:

```cpp
template<typename T>
bool esIgual(const T& a, const T& b) {
    return a == b;
}
```

* La función `esIgual` recibe dos parámetros genéricos `a` y `b` de tipo `T` por referencia constante.
* Devuelve `true` si `a` y `b` son iguales (usando el operador `==`), o `false` en caso contrario.
* El tipo `T` se deduce automáticamente al llamar a la función.

Veamos algún ejemplo de uso:

```cpp
int x = 5, y = 5;
bool resultado1 = esIgual(x, y);  // true

double a = 3.14, b = 2.71;
bool resultado2 = esIgual(a, b);  // false

std::string s1 = "hola", s2 = "hola";
bool resultado3 = esIgual(s1, s2);  // true
```

## Deducción automática de tipos

Una característica importante es que el compilador puede **deducir automáticamente el tipo `T`** en la mayoría de los casos, a partir de los argumentos con que se llama a la función:

```cpp
int x = 5, y = 10;
auto resultado = max(x, y);  // T deducido como int

double a = 3.14, b = 2.71;
auto resultado2 = max(a, b); // T deducido como double
```

Esto facilita el uso, evitando que el programador especifique explícitamente los tipos.

## Uso explícito de tipos

En algunos casos especiales, puede ser necesario indicar el tipo explícitamente:

```cpp
auto resultado = max<double>(3, 7.5);
```

Esto fuerza a que la función sea instanciada con `T = double`.

## Ventajas  y desventajas

Como ventajas podemos señalar:

* **Reutilización de código:** Un solo bloque de código sirve para múltiples tipos.
* **Eficiencia:** El código generado se especializa para cada tipo, sin pérdida de rendimiento.
* **Abstracción:** El código se centra en la lógica, no en el tipo.
* **Compatibilidad:** Se integra con la STL y otros componentes genéricos.

Y como desventajas:

* **Errores de compilación complejos:** Los mensajes de error pueden ser difíciles de interpretar, especialmente en plantillas anidadas o recursivas.
* **Aumento del tamaño del código:** La instanciación para muchos tipos puede inflar el tamaño del binario.
* **Restricciones de tipos:** El código de la plantilla debe funcionar con todos los tipos permitidos; si un tipo no soporta una operación usada, habrá error.
* **Complejidad:** El uso avanzado puede ser complicado para programadores novatos.

