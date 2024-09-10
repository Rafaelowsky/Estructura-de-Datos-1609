/******************************************************************************

Ejemplo de estrucutras de sentencias de control
Programa que usa For y Break
RZS
06-09-2024

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
        for (int t = 0; t < 100 ; t++) {
            cout << t << endl;
            if (t == 55) // Cuando se llegue al 55 se saldra del ciclo
                        // aunque se siga cumpliendo la sentencia original
            break; // salir del for
        }
        return 0;
}
