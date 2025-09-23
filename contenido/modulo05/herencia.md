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

## Sobrescritura de métodos (`override`)

Una clase derivada puede **sobrescribir** un método de la clase base para proporcionar un comportamiento específico.

En C++ moderno se recomienda usar la palabra clave `override` para indicar de forma explícita que se está sobrescribiendo un método virtual. Ejemplo:

```cpp
class Animal {
public:
    virtual void hablar() const {
        std::cout << "El animal emite un sonido." << std::endl;
    }
};
```

```cpp
class Perro : public Animal {
public:
    void hablar() const override {
        std::cout << "El perro ladra." << std::endl;
    }
};
```

Las ventajas del uso de `override` son:
* El compilador verifica que efectivamente se está sobrescribiendo un método virtual existente.
* Ayuda a prevenir errores por diferencias en la firma del método.

## Introducción a funciones virtuales y polimorfismo

Las **funciones virtuales** permiten el **polimorfismo dinámico**, es decir, decidir en tiempo de ejecución qué versión de un método invocar según el tipo real del objeto, no el tipo del puntero o referencia.

Para lograr polimorfismo:
* La función en la clase base debe ser `virtual`.
* Se invoca el método a través de un puntero o referencia a la clase base.
* Siempre que una clase tenga métodos virtuales, su destructor debe ser virtual para evitar fugas o comportamientos indefinidos.

Veamos un ejemplo:


```cpp
#include <iostream>
#include <string>

class Animal {
public:
    virtual void hablar() const {
        std::cout << "El animal emite un sonido." << std::endl;
    }

    virtual ~Animal() = default; // Destructor virtual recomendado
};

class Perro : public Animal {
public:
    void hablar() const override {
        std::cout << "El perro ladra." << std::endl;
    }
};

class Gato : public Animal {
public:
    void hablar() const override {
        std::cout << "El gato maúlla." << std::endl;
    }
};

void hacerHablar(const Animal& a) {
    a.hablar();
}

int main() {
    Perro p{};
    Gato g{};

    hacerHablar(p);  // "El perro ladra."
    hacerHablar(g);  // "El gato maúlla."

    Animal* ptrAnimal = new Perro{};
    ptrAnimal->hablar();  // "El perro ladra."
    delete ptrAnimal;

    return 0;
}
```

Para que el polimorfismo dinámico funcione correctamente, se deben utilizar **punteros** o **referencias** a la clase base.

