#include <iostream>
using namespace std;

int main()
{
    char elementos[10];
    char mayor;
    char menor;

    cout << "Ingrese 10 elementos (letras o numeros separados por espacio): ";
    for (int i = 0; i < 10; i++)
    {
        cin >> elementos[i];
        // si es la primera vuelta del indice que se asignen los valores de ref
        if (i == 0)
        {
            mayor = elementos[i];
            menor = elementos[i];
        }
        else
        {
            if (elementos[i] > mayor)
            {
                mayor = elementos[i];
            }
            if (elementos[i] < menor)
            {
                menor = elementos[i];
            }
        }
    }

    cout << "El menor es: " << menor << endl;
    cout << "El mayor es: " << mayor << endl;

    return 0;
}