# Herencia y polimorfismo

La **herencia** y el **polimorfismo** son conceptos fundamentales de la Programación Orientada a Objetos (POO) que permiten:

* Reutilizar código.
* Modelar relaciones jerárquicas entre clases.
* Diseñar sistemas flexibles y extensibles.

## Herencia

La **herencia** permite que una clase (denominada **derivada** o **subclase**) herede atributos y métodos de otra clase (denominada **base** o **superclase**).

Esto representa una relación **"es un"** (**is-a**)*

* Un **Gato** es un **Animal**.
* Un **Círculo** es una **Figura**.
* Un **Coche** es un **Vehículo**.

La herencia evita la duplicación de código y permite extender el comportamiento de las clases base.

La forma más habitual y recomendada de herencia en C++ es la **herencia pública**, que significa que los miembros `public` y `protected` de la clase base se mantienen accesibles con las mismas restricciones en la clase derivada. El control de acceso `protected` indica que un miembro no es accesible desde fuera de la clase, pero sí puede ser accedido por clases derivadas. Este modificador se utiliza comúnmente para permitir que las subclases interactúen directamente con ciertos atributos o métodos internos de la clase base, sin exponerlos completamente como parte de su interfaz pública.

Veamos un ejemplo:

```cpp
#include <iostream>
#include <string>

// Clase base
class Animal {
private:
    std::string nombre;

public:
    // Constructor por defecto usando lista de inicialización
    Animal() : nombre{""} {}

    // Constructor con parámetro usando lista de inicialización
    Animal(const std::string& n) : nombre{n} {}

    void respirar() const {
        std::cout << nombre << " está respirando." << std::endl;
    }

    void mostrarNombre() const {
        std::cout << "Nombre: " << nombre << std::endl;
    }
};

// Clase derivada
class Perro : public Animal {
private:
    std::string raza;

public:
    // Constructor por defecto
    Perro() : Animal{}, raza{""} {}

    // Constructor con parámetros usando lista de inicialización
    Perro(const std::string& n, const std::string& r)
        : Animal{n}, raza{r} {}
        
    void mostrar() const {
        mostrarNombre(); // Método heredado de Animal
        std::cout << "Raza: " << raza << std::endl;
    }

    void ladrar() const {
        std::cout << "¡Guau guau!" << std::endl;
    }
};

int main() {
    Perro miPerro{"Firulais", "Pastor Alemán"};

    miPerro.respirar();  // Método heredado de Animal
    miPerro.mostrar();   // Método propio que llama a mostrarNombre()
    miPerro.ladrar();    // Método exclusivo de Perro

    return 0;
}
```

* La clase base `Animal` y los miembros de `Perro` se inicializan **directamente en la lista de inicialización**.
* Las clases derivadas deben invocar explícitamente el constructor de la clase base. Si no se indica, se invoca automáticamente el constructor por defecto de la clase base (si existe). 
* El destructor de la clase base se invoca automáticamente después del destructor de la clase derivada.

Muy buena base 👌.
Ya introdujiste la **herencia**, con ejemplos claros y un código que muestra la reutilización de atributos y métodos.
Ahora, de forma introductoria, puedes hablar del **polimorfismo** como el **siguiente paso natural**: no solo heredar, sino **poder tratar a distintos objetos derivados como si fueran de la clase base** y, al mismo tiempo, conseguir que se comporten de manera distinta.

## Introducción al polimorfismo

El **polimorfismo** significa *“muchas formas”*. En POO, se refiere a la capacidad de que un mismo método tenga **diferentes comportamientos** según el tipo de objeto que lo invoque.

En C++ existen dos formas principales de polimorfismo:

* **Polimorfismo de sobrecarga (en tiempo de compilación):** mismo nombre de función pero diferentes parámetros.
* **Polimorfismo dinámico (en tiempo de ejecución):** se logra mediante **herencia** y **métodos virtuales**.

Nos centraremos primero en el **polimorfismo dinámico**, que es el más relevante en la POO clásica.

Podemos extender nuestro ejemplo de `Animal` para que diferentes animales "hagan sonido" de manera distinta.

```cpp
#include <iostream>
#include <string>

class Animal {
protected:
    std::string nombre;

public:
    Animal(const std::string& n) : nombre{n} {}

    virtual void hacerSonido() const {  // Método virtual
        std::cout << nombre << " hace un sonido genérico." << std::endl;
    }
};

class Perro : public Animal {
public:
    Perro(const std::string& n) : Animal{n} {}

    void hacerSonido() const override {
        std::cout << nombre << " dice: ¡Guau guau!" << std::endl;
    }
};

class Gato : public Animal {
public:
    Gato(const std::string& n) : Animal{n} {}

    void hacerSonido() const override {
        std::cout << nombre << " dice: ¡Miau!" << std::endl;
    }
};

int main() {
    Perro perro("Firulais");
    Gato gato("Misu");

    // Polimorfismo usando referencias
    Animal& a1 = perro;
    Animal& a2 = gato;

    a1.hacerSonido(); // Llama a Perro::hacerSonido()
    a2.hacerSonido(); // Llama a Gato::hacerSonido()

    return 0;
}

```
* Un **método virtual** en C++ es un método de una clase base que **puede ser sobrescrito** por las clases derivadas, y cuya llamada se resuelve en tiempo de ejecución según el tipo real del objeto, no según el tipo de la referencia o puntero que lo invoca.
* Se recomienda usar la palabra clave `override` para indicar de forma explícita que se está sobrescribiendo un método virtual.
* El método `hacerSonido()` en `Animal` se declara como `virtual`.
* Cada clase derivada (`Perro`, `Gato`) sobrescribe ese método con `override`.
* `a1` y `a2` son referencia de tipo `Animal`, pero cada una referencia a un objeto distinto. Al invocar `hacerSonido()` se ejecuta la versión correspondiente al tipo real del objeto (polimorfismo dinámico).
* Esto permite escribir código más **flexible** y **extensible**, donde se pueden tratar colecciones de distintos tipos de objetos de manera uniforme.

