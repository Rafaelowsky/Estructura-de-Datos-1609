/*
    Ejemplo de una estructura en c++ pero delcarado la variable persona con el tipo de dato datos persona
    RZS
    25/09/2024
*/

#include <iostream>
using namespace std;

int main()
{
    struct datosPersona
    {
        string nombre;
        char  inicial;
        int   edad;
        float nota;
    };

    datosPersona persona;

    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;

    cout << "La edad es " << persona.edad<<endl;
    cout<<"Su inicial es "<<persona.inicial<<endl;
    cout<<"Su nombre es :"<<persona.nombre<<endl;
    cout<<"La nota es :"<<persona.nota<<endl;

    return 0;
}
