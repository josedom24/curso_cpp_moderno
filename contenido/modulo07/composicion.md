# Composición de Objetos

En la Programación Orientada a Objetos (POO), uno de los mecanismos fundamentales para modelar relaciones entre entidades del mundo real es la **composición**, también conocida como relación **"tiene un"** (**has-a**). Esta técnica permite construir clases complejas a partir de otras clases, fomentando el diseño modular y la reutilización de código.

La **composición** implica que una clase contiene como atributos a objetos de otras clases. Esta relación se describe informalmente como:

✔ "Un coche **tiene un** motor."
✔ "Una persona **tiene una** dirección."
✔ "Un pedido **tiene una** fecha."

En términos de C++, se dice que una clase **compone** otras clases cuando declara objetos de esas clases como **atributos**.

---

## 2. Clases que contienen objetos de otras clases

Para lograr la composición en C++, simplemente se declara como atributo un objeto de otra clase dentro de la definición de una clase.

### Ejemplo básico

```cpp
class Motor {
private:
    int potencia;

public:
    Motor(int p) : potencia{p} {}

    int getPotencia() const {
        return potencia;
    }
};
```

La clase `Coche` puede **componer** un objeto de tipo `Motor`:

```cpp
class Coche {
private:
    std::string marca;
    Motor motor;  // Composición: un Coche tiene un Motor

public:
    Coche(const std::string& m, int potenciaMotor)
        : marca{m}, motor{potenciaMotor} {}

    void mostrar() const {
        std::cout << "Marca: " << marca
                  << ", Potencia: " << motor.getPotencia() << " CV" << std::endl;
    }
};
```

---

## 3. Ejemplo práctico completo: Objeto dentro de otro objeto

A continuación se muestra un ejemplo completo que ilustra la composición utilizando inicialización uniforme:

```cpp
#include <iostream>
#include <string>

class Direccion {
private:
    std::string calle;
    std::string ciudad;

public:
    Direccion(const std::string& c, const std::string& ciu)
        : calle{c}, ciudad{ciu} {}

    void mostrar() const {
        std::cout << "Calle: " << calle << ", Ciudad: " << ciudad << std::endl;
    }
};

class Persona {
private:
    std::string nombre;
    Direccion direccion;  // Composición: una Persona tiene una Direccion

public:
    Persona(const std::string& n, const Direccion& d)
        : nombre{n}, direccion{d} {}

    void mostrar() const {
        std::cout << "Nombre: " << nombre << std::endl;
        direccion.mostrar();
    }
};

int main() {
    Direccion dir{"Calle Mayor 123", "Madrid"};
    Persona p{"Juan", dir};

    p.mostrar();

    return 0;
}
```

---

## 4. Observaciones importantes

✔ Cuando se crea un objeto de tipo `Persona`, automáticamente se construye también el objeto `Direccion` contenido en su interior.
✔ El destructor de `Direccion` se invoca automáticamente cuando se destruye el objeto `Persona`.
✔ La composición garantiza que los objetos contenidos existen mientras exista el objeto que los compone.
✔ Se usa **inicialización uniforme** en la lista de inicialización para construir correctamente los atributos.

---

## 5. Ventajas de la composición

✅ Permite construir clases complejas a partir de otras más simples.
✅ Favorece la reutilización y el diseño modular.
✅ Refleja relaciones del mundo real de forma natural.
✅ Mejora la legibilidad y mantenibilidad del código.

---

## 6. Conclusión

La **composición** es un pilar fundamental del diseño orientado a objetos. Mediante ella, es posible construir jerarquías y estructuras complejas, delegando responsabilidades a objetos internos y logrando así software más organizado, mantenible y coherente con los principios de diseño de C++ moderno.

---

¿Quieres que prepare ejercicios propuestos o una comparación breve entre composición y herencia como material complementario?
