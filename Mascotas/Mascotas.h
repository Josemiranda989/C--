#include <iostream>
#include <string>

using namespace std;

class Mascotas
{
private:
    int peso;
    string nombre;
    string raza;

public:
    void set_peso(int variable)
    {
        peso = variable;
    }
    void set_nombre(string variable)
    {
        nombre = variable;
    }
    void set_raza(string variable)
    {
        raza = variable;
    }
    void mostrar()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Peso: " << peso << endl;
        cout << "Raza: " << raza << endl;
    }
    int get_peso()
    {
        return peso;
    }
};