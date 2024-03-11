

#include <iostream>
using namespace std;

int main()
{
    int arreglo[6] = {19, 10, 8, 17, 9, 15};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (arreglo[j] > arreglo[i])
            {
                arreglo[i] = arreglo[j];
                arreglo[j] = arreglo[i];
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arreglo[i] << endl;
    }
}