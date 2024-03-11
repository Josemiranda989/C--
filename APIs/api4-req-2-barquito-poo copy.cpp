#include <iostream>
#include <vector>

using namespace std;
class Barco
{
private:
    string jugador;
    int largo;
    char fila;
    int columna;
    char direccion;
    bool atacando;

public:
    // Constructor
    Barco(string jugador, int largo, char fila, int columna, char direccion, bool atacando) : jugador(jugador), largo(largo), fila(fila), columna(columna), direccion(direccion), atacando(atacando) {}

    // Métodos
    void mostrarInfo()
    {
        cout << "Jugador: " << jugador << endl;
        cout << "Largo: " << largo << endl;
        cout << "Fila: " << fila << endl;
        cout << "Columna: " << columna << endl;
        cout << "Direccion: " << direccion << endl;
        if (atacando)
        {
            cout << "Atacando: Si💣" << endl;
        }
        else
        {
            cout << "Atacando: No" << endl;
        }
    }

    string mostrarNombre()
    {
        return jugador;
    }
    bool recibirAtaque(int filaAtaque, int columnaAtaque)
    {
        // Verificar si el ataque alcanza al barco
        if (fila == filaAtaque && columna == columnaAtaque)
        {
            cout << "El barco ha sido alcanzado por el ataque." << endl;
            return true;
        }
        else
        {
            cout << "El barco no ha sido alcanzado por el ataque." << endl;
            return false;
        }
    }
};

int main()
{
    // Instancia de los jugadores
    Barco barco1("Lucas", 3, 'A', 1, 'H', false);
    Barco barco2("Jose", 4, 'B', 3, 'V', false);

    cout << "Informacion del Barco 1:" << endl;
    barco1.mostrarInfo();
    cout << endl;

    cout << "Informacion del Barco 2:" << endl;
    barco2.mostrarInfo();
    cout << endl;

    cout << "Simulando ataque al Barco de: " << barco1.mostrarNombre() << endl;
    barco1.recibirAtaque(1, 1);
    cout << endl;

    cout << "Simulando ataque al Barco de: " << barco2.mostrarNombre() << endl;
    barco2.recibirAtaque(4, 3);

    return 0;
}
