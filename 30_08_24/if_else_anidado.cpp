/******************************************************************************

Programa que muestra el funcionamiento de IF/ELSE anidado
autos RZS
30 AGO 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max;
    cout << "Escribe 3 números enteros separados por un espacio enter: ";
    cin >> a >> b >> c;
    
    if (a > b)
        if (a > c)
            cout << "el mayor fue el primer número " << a << endl;
        else
            cout << "el mayor fue el tercer numero " << c;
    else}

        if (b > c)
            cout << "el mayor fue el segundo número " << b;
    else
        cout << "el mayor fue el tercer número " << c;
        cout << " Fin de programa";
    
    return 0;
}