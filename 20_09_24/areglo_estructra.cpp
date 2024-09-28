/*
    Introducción a C++
    RZS
    Ejemplo 07.03:
    Array de registros
    Ejemplo  de un arreglo de registros
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct datosPersona
    {
        string nombre;
        char  inicial;
        int   edad;
        float nota;
    };

    datosPersona *persona = new datosPersona[10];

    for (int i=0; i<2; i++)
    {
        cout << "Dime el nombre de la persona " << i << endl;
        cin >> persona[i].nombre;
         cout << "Dime  la inicial " << i << endl;
        cin >> persona[i].nombre;
         cout << "Dime la edad " << i << endl;
        cin >> persona[i].nombre;
         cout << "Dime a nota " << i << endl;
        cin >> persona[i].nombre;


    }

    cout << "La persona 3 es " << persona[1].nombre << endl
                               << persona[1].inicial << endl
                               << persona[1].edad<< endl
                               << persona[1].nota << endl;

    return 0;
}
