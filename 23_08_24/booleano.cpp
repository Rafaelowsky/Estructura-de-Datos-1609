/*
    Programa que maneja tipo de dato bool
    autor RZS
    23 AGO 2024
*/

#include <iostream>
#include <math.h>

using namespace std;

main() {
    const bool continuar = true;
    bool a = true;
    int n;
    while (a == continuar) { // Mientras ambos sigan siendo true se seguira ejecutando
        cout << "Tecla un número ";
        cin >> n;

        if (n < 0) {
            cout << "No se admiten negativos";
            a = false;
        }
        else
            cout << "Muy bien, otro mas: ";
    }
    return 0;
}
