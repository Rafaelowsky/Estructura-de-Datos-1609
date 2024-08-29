/******************************************************************************

Programa que maneja variables locales y globales
autor RZS
28 AGO 2024

*******************************************************************************/

#include <iostream>
#include <ctype.h>

using namespace std;

// Variables globales
char c = 'A';
int t;

int main()
{
    // Variable local (esta se encuentra dentro de un bloque)
    // char c = 'A';
    // int t;
    c = tolower (c);
    t = isdigit (c);
    
    cout << "letra minuscula " << c <<endl;
    cout << "es digito " << t <<endl; 
    
    return 0;
    
}