/******************************************************************************

Ejemplo de estructura o sentencias de control
Programa que muestra el uso del for
RZS
06 SEP 2024

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    for (int n = 1; n <= 10; n += 2) {
            cout << "Número: " << n << "\t" << n * n ;
            cout << "" << endl;
        }
         return 0;
}
