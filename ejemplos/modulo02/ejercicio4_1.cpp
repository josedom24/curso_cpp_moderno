#include <iostream>

int contador{0};                    //Variable global

int main() {
    int edad{30};                   // Inicialización uniforme
    auto salario{2500.75};          // Inferencia con auto (double)
    decltype(salario) PI{3.14159};  // Inferencia con decltype
    contador+=1;


    std::cout << "Edad: " << edad << "\n";
    std::cout << "Salario: " << salario << "\n";
    std::cout << "Pi: " << PI << "\n";
    std::cout << "Contador: " << contador << "\n";
    
    return 0;
}
