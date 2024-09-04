/******************************************************************************

Ejemplo de estructuras o sentencias de control
Programa que muestra el uso de while
RZS
04 SEP 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int contador = 0;
    
    while (contador <= 100)
    
    {
        cout << contador << " Hola" << endl;
        contador ++;
    }
    
    return 0;
}