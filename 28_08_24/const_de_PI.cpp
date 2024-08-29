/******************************************************************************

Programa que maneja declaracion de constante
autor RZS
28 AGO 2024

*******************************************************************************/

#include <iostream>
#include <math.h>
const float PI=3.1416; 
using namespace std;

int main()
{
    float radio, resultado;
    cout << "Area de un circulo " << endl;
    cout << "Escribe el valor del radio " << endl;
    cin >> radio;
    resultado = PI * (radio * radio); // pow nos sirve para poder utilizar exponentes

    cout << "el area del circulo con radio " << radio << " es " << resultado << endl;
    return 0;
}