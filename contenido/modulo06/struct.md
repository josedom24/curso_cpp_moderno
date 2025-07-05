# Tipos definidos por el usuario: `struct`

Un `struct` (abreviatura de *structure*, en inglés) es un **tipo de dato definido por el programador**, que combina varios elementos, llamados **miembros**, en un solo objeto.

Cada miembro puede ser de un tipo distinto, y al agruparlos dentro de una estructura, se facilita el manejo y la organización de la información.

Veamos un ejemplo:

```cpp
struct Punto {
    double x;
    double y;
};
```

En este ejemplo, definimos un nuevo tipo de dato llamado `Punto`, que representa un punto en un plano bidimensional mediante dos coordenadas: `x` e `y` de tipo `double`.

## Acceso a los miembros de un `struct`

Para utilizar un `struct`, primero se debe declarar una variable de ese tipo. Luego, se accede a sus miembros mediante el **operador punto (`.`)**. Por ejemplo:

```cpp
#include <iostream>

struct Punto {
    double x;
    double y;
};

int main() {
    Punto p;
    p.x = 3.5;
    p.y = 4.2;

    std::cout << "Coordenadas: (" << p.x << ", " << p.y << ")" << std::endl;

    return 0;
}
```

## Inicialización de una `struct`

Podemos usar los diferentes tipos de inicialización. En el ejemplo usamos **inicialización uniforme**:

```cpp
Punto p{3.5, 4.2};
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


## Relación con la Programación Orientada a Objetos (POO)

Aquí tienes una **conclusión formal** sobre `struct`, adaptada al enfoque de tu curso, donde se deja claro que los aspectos avanzados se tratarán al introducir la Programación Orientada a Objetos y el concepto de `class`:

---

## **Conclusión sobre `struct` en C++ moderno**

Las estructuras (`struct`) en C++ son una herramienta fundamental para agrupar múltiples datos relacionados bajo un mismo nombre. Su uso permite organizar la información de forma clara y facilita el modelado de entidades sencillas dentro de un programa.

Aunque en C++ moderno los `struct` pueden incorporar **constructores**, **métodos** y otras características avanzadas, en este apartado nos hemos centrado en su función básica: **agrupar datos de manera simple y directa**.

Los conceptos de **constructores**, **métodos**, y el diseño de tipos más complejos y protegidos pertenecen al ámbito de la **Programación Orientada a Objetos (POO)**, que estudiaremos en detalle más adelante, cuando introduzcamos formalmente el concepto de **`class`**.


