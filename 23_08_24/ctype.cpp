/*
    Programa que maneja tipo de dato char
    autor RZS
    23 AGO 2024
*/

#include <iostream>
#include <ctype.h>

using namespace std;

main() {
    char c = 'A';
    int t;

    c = tolower(c); // c vale "a" // Cambia a minuscula
    t = isdigit(c); // t vale 0 (False) // Verifica que sea digito

    cout << "Letra minuscula " << c << endl;
    cout << "Es digito " << t << endl;

    return 0;
}
