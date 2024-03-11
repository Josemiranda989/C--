#include <iostream>
#include <string>
#include "Mascotas.h" // Incluye el archivo de encabezado

using namespace std;

int main()
{
    Mascotas Cachula;
    Cachula.set_nombre("Pikachu");
    Cachula.set_raza("Trueno");
    Cachula.set_peso(51);

    Cachula.mostrar();

    cout << "El peso es " << Cachula.get_peso() << endl;

    return 0;
}
