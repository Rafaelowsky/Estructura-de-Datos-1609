/******************************************************************************

Programa que muestra el funcionamiento de SWTICH/CASE
autos RZS
30 AGO 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
    int num;
    cout << "Escribe un número entero" << endl;
    cin>> num;
    
    switch (num)
{
    case 1:
        cout << "Ha introducido el no 1\n";
        break;
    
    case 2:
        cout << "Ha introducido el no 2\n";
        break;
    
    default:
        cout << "Ha introducido otro no";
    
    }
    return 0;
}