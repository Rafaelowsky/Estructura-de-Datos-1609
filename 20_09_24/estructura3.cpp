/*
    Introducción a C++
    RZS
    Ejemplo 07.04:
    Registros anidados
    Ejemplo de una estructura anidada con la estructura de fecha de nacimiento
*/

#include <iostream>
#include <string>

using namespace std;

struct fechaNacimiento
{
    int  dia;
    int  mes;
    int anyo;
};

struct datosPersona
{
    string nombre;
    char  inicial;
    struct fechaNacimiento diaDeNacimiento;
    float nota;
};

int main() {
    datosPersona persona;

    persona.nombre = "Ignacio";
    persona.inicial = 'I';
    persona.diaDeNacimiento.mes = 8;
    persona.nota = 7.5;

    cout << "El mes de nacimiento es " << persona.diaDeNacimiento.mes << endl;
    cout << "La nombre  es " << persona.nombre << endl;
    cout << "La inicial es " << persona.inicial << endl;
    cout << "La nota es " << persona.nota<<endl;

    return 0;
}

