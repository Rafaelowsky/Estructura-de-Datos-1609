/******************************************************************************

Ejemplo de estructura o sentencias de control
Programa que muestra el uso del for
RZS
06 SEP 2024

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    for (int i = 0, j = 100; i < j; i++, j--) {
        int k;
        k = i + (2 * j);
        cout << "El valor de i es " << i << ", ";
        cout << "El valor de j es " << j << ", ";
        cout << "k es " << k << endl;  // Separar claramente las variables y agregar salto de línea
        }
        return 0;
}
