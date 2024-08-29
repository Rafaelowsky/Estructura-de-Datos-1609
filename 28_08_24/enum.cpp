/******************************************************************************

Programa que maneja declaracion de constante
autor RZS
28 AGO 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout << "Constante enumerada" << endl;
    
    enum Dias { Lunes, Martes, Miercoles, Jueves, Viernes };
    Dias libre = Lunes; // Dias libre = 4;
    cout << libre; // se visualiza por pantalla el número 4
    return 0;
}