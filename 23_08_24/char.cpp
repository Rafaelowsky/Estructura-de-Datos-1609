/*
    Programa que maneja tipo de dato char
    autor RZS
    23 AGO 2024
*/

#include <iostream>

using namespace std;

main() {
    char letra = 'a', mayus;
    mayus = letra - 32; // Esto escribe la letra A mayuscula a razón del codigo ASCII
    cout << "letra minuscula " << letra << endl;
    cout << "letra mayuscula " << mayus << endl;
    return 0;
}
