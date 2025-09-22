# Definición de clases y creación de objetos

## Definición de clases

Una **clase** es una plantilla o molde que define:

* **Atributos** (también llamados **miembros de datos**): variables que representan el estado de los objetos.
* **Métodos** (también llamados **funciones miembro**): funciones que representan el comportamiento de los objetos.

La clase encapsula estos elementos y define cómo los objetos deben comportarse. Veamos un ejemplo:

```cpp
#include <iostream>

class Rectangulo {
public:
    double base;
    double altura;


    // Método para calcular el área
    double calcularArea() const {
        return base * altura;
    }

    // Método para establecer las dimensiones (si se desea cambiar después de la creación)
    void establecerDimensiones(double b, double h) {
        base = b;
        altura = h;
    }
};

int main() {
    // Crear el objeto con el constructor y pasar las dimensiones directamente
    Rectangulo r1;
    r1.base=3.0;
    r1.altura=5.0;

    std::cout << "Área del rectángulo: " << r1.calcularArea() << std::endl;

    // Si se desea cambiar las dimensiones después de la creación
    r1.establecerDimensiones(7.0, 4.0);
    std::cout << "Área del rectángulo actualizado: " << r1.calcularArea() << std::endl;

    return 0;
}
```

En este ejemplo:

* `base` y `altura` son **atributos públicos**.
* Los métodos `establecerDimensiones` y `calcularArea` son **públicos** y permiten manipular el estado del objeto y realizar cálculos.
* Los métodos, al ser funciones miembro, pueden recibir argumentos y retornar valores como cualquier función en C++. Las distintas formas de paso de argumentos y retorno de valores es igual a las estudiadas con las funciones.

## Creación e inicialización de objetos

Un **objeto** es una **instancia concreta de una clase**. Cada objeto tiene su propio estado (valores de los atributos) y puede ejecutar los métodos definidos por la clase. En el ejemplo:

```cpp
    Rectangulo r1;
    r1.base=3.0;
    r1.altura=5.0;
```

En este caso:

* Se crea un objeto `r1` de tipo `Rectangulo`.
* Como los atributos son públicos, se pueden inicializar. Para acceder a los atributos utilizamos el punto.




---











## Introducción de getters y setters

El **encapsulamiento** es un principio fundamental de la POO que consiste en proteger los atributos internos de los objetos, permitiendo su acceso o modificación únicamente a través de métodos públicos controlados, conocidos como **getters** (métodos que permiten el valor de los atributos) y **setters** (métodos que permiten modificar los atributos).



```cpp
class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Setter para el nombre
    void setNombre(const std::string& n) {
        nombre = n;
    }

    // Getter para el nombre
    std::string getNombre() const {
        return nombre;
    }

    // Setter para la edad
    void setEdad(int e) {
        if (e >= 0) {
            edad = e;
        }
    }

    // Getter para la edad
    int getEdad() const {
        return edad;
    }
};

int main() {
    Persona p1;
    p1.setNombre("Laura");
    p1.setEdad(28);

    std::cout << "Nombre: " << p1.getNombre() << ", Edad: " << p1.getEdad() << std::endl;

    return 0;
}
```
Los getters y setters:

* Permiten controlar cómo se accede o modifica el estado del objeto.
* Facilitan la validación de datos antes de modificar atributos (como en el caso de la edad).
* Mejoran la seguridad y robustez del código.
* Mantienen el principio de encapsulamiento.

## Ejemplo completo: Clase `Coche`

```cpp
#include <iostream>
#include <string>

class Coche {
private:
    std::string marca;
    std::string modelo;
    int anio;

public:
    // Setter para la marca
    void setMarca(const std::string& m) {
        marca = m;
    }

    // Getter para la marca
    std::string getMarca() const {
        return marca;
    }

    // Setter para el modelo
    void setModelo(const std::string& mod) {
        modelo = mod;
    }

    // Getter para el modelo
    std::string getModelo() const {
        return modelo;
    }

    // Setter para el año (con validación)
    void setAnio(int a) {
        if (a > 1885) { // Primer automóvil se inventó alrededor de 1886
            anio = a;
        } else {
            std::cout << "Año no válido. Debe ser mayor a 1885." << std::endl;
        }
    }

    // Getter para el año
    int getAnio() const {
        return anio;
    }

    // Método para mostrar la información del coche
    void mostrarInformacion() const {
        std::cout << "Marca: " << marca 
                  << ", Modelo: " << modelo 
                  << ", Año: " << anio << std::endl;
    }
};

int main() {
    Coche coche1;

    // Inicialización de los atributos usando setters
    coche1.setMarca("Toyota");
    coche1.setModelo("Corolla");
    coche1.setAnio(2020);

    // Mostrar información usando un método
    coche1.mostrarInformacion();

    // Ejemplo de uso de getters
    std::cout << "La marca del coche es: " << coche1.getMarca() << std::endl;

    return 0;
}
```

* La clase `Coche` encapsula tres atributos privados: `marca`, `modelo` y `anio`.
* Se proporcionan métodos públicos (`set` y `get`) para controlar el acceso y modificación de esos atributos.
* El método `setAnio` incluye una validación para evitar valores inválidos.
* El método `mostrarInformacion` imprime el estado del objeto de forma legible.
* En la función `main`, se crea un objeto `coche1`, se inicializa mediante setters y se accede a su información.









Los **modificadores de acceso** determinan la visibilidad de los atributos y métodos de la clase. Los más utilizados son:

* `public`: Los miembros declarados como `public` son accesibles desde cualquier parte del programa.
* `private`: Los miembros declarados como `private` solo son accesibles desde dentro de la propia clase. Se utilizan para proteger el estado interno del objeto.

Ejemplo:

```cpp
class Ejemplo {
private:
    int datoPrivado; // Solo accesible dentro de la clase

public:
    void metodoPublico() {
        // Puede acceder a datoPrivado
    }
};
```

Por convención y buenas prácticas, se recomienda:

* Declarar los atributos como `private` para proteger el estado del objeto.
* Proporcionar métodos públicos controlados (getters y setters) para acceder o modificar los atributos si es necesario.
* Terminar el nombre de los atributos con guión bajo `_`. Esto permite diferenciar claramente atributos de variables locales o parámetros y evitar colisiones de nombres.
