#include <iostream>
using namespace std;
class arregloCaracteres
{
private:
    char valores[10];

public:
    void ingresarValores()
    {
        cout << "Ingrese los 10 elementos del arreglo: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> valores[i];
        }
    }
    char encontrarMayor()
    {
        char mayor = valores[0];
        for (int i = 1; i < 10; i++)
        {
            if (valores[i] > mayor)
            {
                mayor = valores[i];
            }
        }
        return mayor;
    }
    char encontrarMenor()
    {
        char menor = valores[0];
        for (int i = 1; i < 10; i++)
        {
            if (valores[i] < menor)
            {
                menor = valores[i];
            }
        }
        return menor;
    }
};
int main()
{
    arregloCaracteres datos;
    datos.ingresarValores();
    char mayor = datos.encontrarMayor();
    char menor = datos.encontrarMenor();
    cout << "El menor es " << menor << " y el mayor es " << mayor << endl;
    return 0;
}
