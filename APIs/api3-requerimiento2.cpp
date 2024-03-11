#include <iostream>
#include <string>

using namespace std;

int main()
{
    int longitud;
    // Ingresamos la cantidad de pacientes
    cout << "Ingrese la longitud de la lista de pacientes:" << endl;
    cin >> longitud;
    string pacientes[longitud][2];

    // Los pacientes ingresan los datos, guardamos y ordenamos alfabeticamente
    for (int i = 0; i < longitud; i++)
    {
        cout << "Ingrese el nombre del paciente #" << (i + 1) << ":" << endl;
        cin >> pacientes[i][0];
        cout << "Ingrese el apellido del paciente #" << (i + 1) << ":" << endl;
        cin >> pacientes[i][1];

        for (int j = 0; j < longitud; j++)
        {
            if (pacientes[j][0] > pacientes[i][0])
            {
                string temp_nombre = pacientes[i][0];
                string temp_apellido = pacientes[i][1];
                pacientes[i][0] = pacientes[j][0];
                pacientes[i][1] = pacientes[j][1];
                pacientes[j][0] = temp_nombre;
                pacientes[j][1] = temp_apellido;
            }
        }
    }
    // Mostramos la lista ordenada de pacientes
    cout << "Lista de pacientes ordenada:" << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Paciente #" << (i + 1) << endl;
        cout << "- Nombre: " << pacientes[i][0] << endl
             << "- Apellido: " << pacientes[i][1] << endl;
    }
    return 0;
}
