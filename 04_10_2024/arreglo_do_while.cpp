/***********************************************************

 PROGRAMA QUE PROCESA N CANTIDAD DE VECES LAS CALIFICACIONES Y PROMEDIO CON EL CICLO DO-WHILE
 RZS
 04 OCT 24
 
************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char opcion;
    
    do {
        float cal[5], promedio, suma = 0;
        string nombre;
        cout << "Introduce nombre: " << endl;
        cin.ignore();  // Ignorar posibles saltos de línea previos
        getline(cin, nombre);  // Permitir espacios en el nombre

        for (int cont = 0; cont < 5; cont++) {
            cout << "Ingresa calificación " << cont + 1 << ": " << endl;
            cin >> cal[cont];
            suma += cal[cont];
        }

        cout << "\nLas calificaciones son: " << endl;
        for (int cont = 0; cont < 5; cont++) {
            cout << "Calificación " << cont + 1 << ": " << cal[cont] << endl;
        }

        promedio = suma / 5;
        cout << "Tu promedio final es, " << nombre << ": " << promedio << endl;

        // Preguntar si desea procesar de nuevo
        cout << "\n¿Deseas procesar nuevamente las calificaciones? (S/N): ";
        cin >> opcion;
        
    } while (opcion == 'S' || opcion == 's');

    return 0;
}
