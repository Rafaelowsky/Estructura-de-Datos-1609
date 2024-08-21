/* Ejemplo de funciones matematicas contenidas en la biblioteca o cabecera math.h
20 AGO 24
CCS
*/

#include <math.h>
#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    int x, y, z, resto;

    // Funciones matemáticas

    x = abs (-7); // x vale 7
    y = ceil (5.2); // y vale 6
    z = floor (5.2); // z vale 5
    resto = fmod(5.0, 2.0); // resto vale 1

    cout << "Valor absoluto de -7: " << x << endl;
    cout << "Redondeo hacia arriba de 5.2: " << y << endl;
    cout << "Redondeo hacia abajo de 5.2: " << z << endl;
    cout << "Resto de 5 entre 2: " << resto << endl;

    return 0;

}