/******************************************************************************

Ejemplo de estructuras o sentencias de control
Programa que muestra el uso de de-while
RZS
04 SEP 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char n;
    do
    {
        cout << "introducir número: ";
        cin >> n;
        
        if ((isdigit(n))== false)
        cout << "Solo se admiten números";
        
    } while ((isdigit(n)) != false);
        
    return 0;
}