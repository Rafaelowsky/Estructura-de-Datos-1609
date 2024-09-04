/******************************************************************************

Programa que muestra el funcionamiento de IF/ELSE
autos RZS
30 AGO 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
    int a, x;
    cout << "Escribe un número entero " << endl;
    cin >> a;
    
    if (a == 0)
        x = 1;
    else
        x = 0;
        
    cout << "El valor de X es " << x ;
    return 0;
}