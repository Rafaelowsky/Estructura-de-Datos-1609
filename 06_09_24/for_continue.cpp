/******************************************************************************

Ejemplo de estrucutras de sentencias de control
Programa que usa For y Break
RZS
06-09-2024

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    for (int t = 0; t <= 10 ; t++) {
        if (t % 10 == 0) // Esta sentencia elimina los casos que el residuo sea 0
        continue;
        cout << t << endl;
    }
    return 0;
}
