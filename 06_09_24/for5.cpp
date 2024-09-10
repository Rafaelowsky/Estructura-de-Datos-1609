/******************************************************************************

Ejemplo de estructura o sentencias de control
Programa que muestra el uso del for
RZS
06 SEP 2024

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
   for ( int i = 0, j = 5; i + j <= 100; i++, j = j + 5 ) {
            cout << "Valor de i: " << i << "\t" << "Valor de j: " << "\t" << j << endl;
            cout << "El programa se detendra hasta que este numero sea mayor a 100 " << (i + j)
            << endl;
            cout << "--------------------------------------------------------------" << endl;
        }
        return 0;
}
