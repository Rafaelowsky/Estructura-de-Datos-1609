/******************************************************************************

Programa que maneja secuencias de escape "\n", "\t", "\a"
autor RZS
28 AGO 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Lee 3 numeros separados por espacio " << endl;
    cin >> a >> b >> c;
    cout << a << "\n" << b << "\n" << c << endl; // \n nos ayuda para poder hacer saltos de linea
    cout << " con secuencia de escape tabulador  \"hola este es un mensaje entre comillas \"" << endl;
    cout << c << "\t" << a << "\t" << b << "\a" << endl;
    
    return 0;
}