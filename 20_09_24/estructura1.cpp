/*
    Introducción a C++
    Ejemplo 07.01:
    Registros (struct)
    Ejemplo de una estructura en c++
    25/09/24
*/

#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string  nombre;
        char    inicial;
        int     edad;
        float   nota;
    } persona;

    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad es " << persona.edad << endl;
    cout << "Su inicial es " << persona.inicial << endl;
    cout << "Su nombre es :" << persona.nombre << endl;
    cout << "La nota es :" << persona.nota << endl;
    return 0;
}
