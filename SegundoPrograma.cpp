/* Un ejemplo sencilo de un programa que intercambia el alor de 2 números:
20 ago 24
corchetes */

#include <iostream>

using namespace std;

int main()

{
    /*cout sirve para */

    cout<<"Introduce dos valores separados por espacio: ";

   int x, y;
    int aux;
    cin >> x >> y;
    aux = x;
    x = y;
    y = aux;
    cout << "Los valores intercambiados son: ";
    cout << x << " " <<y;
    
    return 0;
}