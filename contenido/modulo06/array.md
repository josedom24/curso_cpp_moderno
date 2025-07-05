Perfecto, aquí tienes un **material didáctico completo y formal sobre `std::array`**, ideal para tu curso de introducción a C++ moderno:

---

# **Tipos Compuestos en C++ Moderno: `std::array`**

## **1. Introducción**

En C++ existen dos formas de trabajar con arreglos o arrays:

### ✅ **Arrays clásicos (heredados de C):**

Son simples bloques de memoria contigua que almacenan varios elementos del mismo tipo.

```cpp
int numeros[5] {1, 2, 3, 4, 5};
```

**Inconvenientes:**

* No conocen su propio tamaño.
* No ofrecen métodos ni funcionalidades adicionales.
* Son propensos a errores como desbordamientos de búfer.
* El acceso fuera de los límites genera comportamiento indefinido.

---

### ✅ **Arrays modernos: `std::array`**

C++ moderno proporciona el contenedor **`std::array`**, definido en el encabezado `<array>`, que combina la eficiencia de los arrays clásicos con la seguridad y funcionalidad de los contenedores de la STL.

---

## **2. Declaración e inicialización de `std::array`**

```cpp
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> numeros {1, 2, 3, 4, 5};

    for (int n : numeros) {
        std::cout << n << " ";
    }
}
```

✔ El tipo se declara como `std::array<TIPO, TAMAÑO>`.
✔ El tamaño debe conocerse en tiempo de compilación.
✔ Se recomienda la **inicialización uniforme `{}`**, siguiendo las buenas prácticas de C++ moderno.

---

## **3. Acceso a los elementos**

Existen varias formas de acceder a los elementos de un `std::array`:

### **Acceso mediante el operador `[]`**

```cpp
std::cout << numeros[0] << std::endl;
```

⚠ No realiza comprobación de límites; el acceso fuera del rango genera comportamiento indefinido.

---

### **Acceso seguro mediante `.at()`**

```cpp
std::cout << numeros.at(0) << std::endl;
```

✔ Realiza comprobación de límites y lanza una excepción (`std::out_of_range`) si el índice no es válido.

---

### **Acceso a los extremos**

```cpp
std::cout << numeros.front() << std::endl;  // Primer elemento
std::cout << numeros.back() << std::endl;   // Último elemento
```

---

## **4. Métodos más importantes de `std::array`**

* `.size()`: Devuelve el tamaño del array.
* `.empty()`: Indica si el array está vacío (solo útil si el tamaño es 0).
* `.at(indice)`: Acceso seguro con comprobación de límites.
* `.front()`, `.back()`: Acceso al primer y último elemento.
* `.fill(valor)`: Rellena todo el array con el valor especificado.
* `.data()`: Devuelve un puntero al array subyacente (útil para interoperabilidad con C).

---

## **5. Recorridos de un `std::array`**

### **Con bucle clásico**

```cpp
for (std::size_t i = 0; i < numeros.size(); ++i) {
    std::cout << numeros[i] << " ";
}
```

---

### **Con bucle for-each (recomendado)**

```cpp
for (int valor : numeros) {
    std::cout << valor << " ";
}
```

---

### **Con iteradores**

```cpp
for (auto it = numeros.begin(); it != numeros.end(); ++it) {
    std::cout << *it << " ";
}
```

---

## **6. Envío de `std::array` como parámetro a funciones**

Los `std::array` se pueden pasar a funciones por:

### ✅ **Referencia (evita copias, recomendado)**

```cpp
void mostrar(const std::array<int, 5>& arr) {
    for (int n : arr) {
        std::cout << n << " ";
    }
}

int main() {
    std::array<int, 5> datos {10, 20, 30, 40, 50};
    mostrar(datos);
}
```

---

### ✅ **Por valor (se hace una copia, menos eficiente para arrays grandes)**

```cpp
void procesar(std::array<int, 5> arr) {
    arr[0] = 99;  // Modifica solo la copia
}
```

---

### ✅ **Por referencia para modificar el array**

```cpp
void modificar(std::array<int, 5>& arr) {
    arr[0] = 99;
}
```

---

## **7. Ventajas de `std::array` frente a arrays clásicos**

✔ Conoce su propio tamaño mediante `.size()`.
✔ Seguridad adicional con `.at()`.
✔ Funciona con algoritmos de la STL (como `std::sort`).
✔ Mayor legibilidad y mantenimiento del código.
✔ Permite inicialización uniforme y sintaxis moderna.

---

## **8. Ejemplo completo**

```cpp
#include <iostream>
#include <array>

void imprimir(const std::array<int, 5>& arr) {
    for (int n : arr) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 5> datos {1, 2, 3, 4, 5};

    imprimir(datos);

    datos.fill(0);  // Rellena el array con ceros

    imprimir(datos);
}
```

---

## **9. Conclusión**

El contenedor `std::array` combina la eficiencia de los arrays clásicos con las ventajas de seguridad y funcionalidad de la STL. En C++ moderno:

✔ **Se recomienda utilizar `std::array` en lugar de arrays tradicionales siempre que el tamaño sea fijo y conocido en tiempo de compilación.**
✔ Para arrays dinámicos o de tamaño variable, se utilizarán contenedores como `std::vector`, que veremos más adelante.

---

¿Quieres que prepare un ejercicio práctico para que los alumnos implementen un programa con `std::array`?
