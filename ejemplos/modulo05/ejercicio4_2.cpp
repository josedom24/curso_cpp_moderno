#include <iostream>
#include <string>

class Ticket {
private:
    std::string asunto;
    int id;

    // Atributo estático: contador de tickets creados
    static int contadorTickets;

public:
    // Constructor usando lista de inicialización
    Ticket(const std::string& asunto_) 
        : asunto{asunto_}, id{++contadorTickets} 
    {
        std::cout << "Ticket creado: " << id << " - " << asunto << '\n';
    }

    int getId() const { 
        return id; 
    }

    const std::string& getAsunto() const { 
        return asunto; 
    }

    // Método estático para acceder al contador
    static int totalTicketsCreados() { 
        return contadorTickets; 
    }
};

// Inicialización del atributo estático (fuera de la clase)
int Ticket::contadorTickets = 0;

int main() {
    Ticket t1("Problema con la impresora");
    Ticket t2("Fallo en el correo");
    Ticket t3("Solicitud de acceso a la VPN");

    std::cout << "\nTotal tickets creados: " 
              << Ticket::totalTicketsCreados() << '\n';

    return 0;
}
