# Tipos de datos numéricos y operaciones aritméticas

Los principales tipos de datos numéricos son los siguientes:

* `int`: Nos permite guardar valores enteros.
* `float`: Nos permiten guardar números reales de precisión simple (7 dígitos decimales aproximadamente).
* `double`: Nos permite guardar números reales de doble precisión (16 dígitos decimales aproximadamente).

El tipo de un dato determina el tamaño de memoria que se va a utilizar para guardarlo y por lo tanto determina los valores que podemos representar.

| Tipo       | Memoria    | Rango de valores               |
| ---------- |:----------:|-------------------------------:|
| int        | 4 bytes    | -2147483648 a 2147483647       |
| float      | 4 bytes    | -3.4E+38 a +3.4E+38            |
| double     | 8 bytes    | -1.7E+308 to +1.7E+308         |


## Modificadores de tipos

Podemos modificar los tipos anteriores para dos cosas: para aumentar la memoria utilizada y por lo tanto aumentar el rango de valores representables, y para indicar si se usan número negativos o no.

Los modificadores son los siguientes: `signed`, `unsigned`, `long` y `short`.

* Los modificadores `signed`, `unsigned`, `long` y `short` se pueden aplicar al tipo `int`.
* Los modificadores `signed`, `unsigned` se puede aplicar al tipo `char`.
* El modificador `long` se puede aplicar al tipo `double`.
* Los modificadores `signed`, `unsigned` también se pueden usar como prefijos de los modificadores `long` y `short`.

Con estas reglas nos quedarían esta tabla con todos los tipos:

| Tipo               | Memoria    | Rango de valores                           |
| -------------------|:----------:|-------------------------------------------:|
| int                | 4 bytes    | -2147483648 a 2147483647                   |
| signed int         | 4 bytes    | -2147483648 a 2147483647                   |
| unsigned int       | 4 bytes    | 0 a 4294967295                             |
| short int          | 2 bytes    | -32768 a 32767                             |
| signed short int   | 2 bytes    | -32768 a 32767                             | 
| unsigned short int | 2 bytes    | 0 a 65535                                  |
| long int           | 8 bytes    | -9223372036854775808 a 9223372036854775807 |
| signed long int    | 8 bytes    | -9223372036854775808 a 9223372036854775807 |
| unsigned long int  | 8 bytes    | 0 a 18446744073709551615                   |
| float              | 4 bytes    | -3.4E+38 a +3.4E+38                        |
| double             | 8 bytes    | -1.7E+308 a +1.7E+308                      |
| long double        | 16 bytes   | 3.3621e-4932 a 1.18973e+4932               |
  
Los tamaños indicados son los más comunes en sistemas de 64 bits, pero pueden variar según la implementación.

Al declarar variables podemos usar una notación corta para declarar enteros largos, cortos o sin signos, donde no tenemos que indicar el tipo `int`, por ejemplo estas dos declaraciones son correctas:

    unsigned short var1;
    long var2;

Podemos usar sufijos para indicar literales numéricos largos (con el sufijo `L`) y sin signo (con el sufijo `U`) O para valores reales el sufijo `f` para valores de precisión simple. Por ejemplo: `123U; 123L; 123UL; 3.14f`.


## Operadores aritméticos

* `+`: Suma dos números
* `-`: Resta dos números
* `*`: Multiplica dos números
* `/`: Divide dos números.
* `%`: Módulo o resto de la división
* `+`, `-`: Operadores unarios positivo y negativo
* `++`: Operador de incremento. Suma uno a la variable, `i++` es lo mismo que `i=i+1`. Dos tipos:
    * `++i`. Pre-incremento:**Primero incrementa**, luego devuelve el valor incrementado.
    * `i++`.Post-incremento:**Primero devuelve el valor actual**, luego incrementa.
* `--`: Operador de decremento. Resta uno a la variable. También existe el pre-decremento y el post-incremento.

La precedencia de operadores es la siguiente:

* Los paréntesis rompen la precedencia.
* Operadores unarios (soĺo tienen un operador, por ejemplo el -9)
* Multiplicar, dividir y módulo
* Suma y resta
* Operadores de incremento y decremento

## Funciones matemáticas

En la librería `cmath` tenemos distintas funciones matemática. Las más útiles que podemos usar en nuestros programas son:

* `double std::pow(double, double);`: Realiza la potencia, la base es el primer parámetro y el exponente el segundo. Recibe datos de tipo `double` y devuelve también una valor `double`.
* `double std::sqrt(double);`: Realiza la raíz cuadrada del parámetro `double` que recibe. Devuelve un valor `double.
* `int std::abs(int);`: Devuelve el valor absoluto (valor entero) del número entero que recibe como parámetro.

Veamos un ejemplo:

    #include <iostream>
    #include <cmath>
    using namespace std;

    int main(int argc, char *argv[]) {
    	int num1=4, num2=2;
    	cout << "Potencia:" << pow(num1,num2) << endl; //Potencia
    	cout << "Raíz Cuadrada:" << sqrt(num1) << endl; //Raíz cuadrada
    	num1=-4;
    	cout << "Valor absoluto:" << abs(num1) << endl; //Valor absoluto
    	return 0;
    }