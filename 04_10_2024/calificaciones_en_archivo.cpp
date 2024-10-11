/******************************************************
 * PROGRAMA QUE MUESTRA UN ARREGLO UNIDIMENSIONAL
 * Con el ciclo do-while
 * además guarda las calificaciones en un archivo txt
 *  * RZS 
 * 04 OCT 2024
 * ************************************/

#include <iostream>
#include <string>
#include <fstream>  // Para manejar archivos

using namespace std;

int main()
{
    char opcion;
    ofstream archivo;  // Crear objeto para manejar el archivo

    // archivo.open("calificaciones.txt", ios::app);  // Abrir archivo en modo append
    archivo.open("calificaciones.txt");  // Abrir archivo en modo append


    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }
    
    do {
        float cal[5], promedio, suma = 0;
        string nombre;
        cout << "Introduce nombre: " << endl;
        cin.ignore();  // Ignorar posibles saltos de línea previos
        getline(cin, nombre);  // Permitir espacios en el nombre

        archivo << "Nombre: " << nombre << endl;  // Escribir el nombre en el archivo

        for (int cont = 0; cont < 5; cont++) {
            cout << "Ingresa calificación " << cont + 1 << ": " << endl;
            cin >> cal[cont];
            suma += cal[cont];
            archivo << "Calificación " << cont + 1 << ": " << cal[cont] << endl;  // Escribir calificaciones en el archivo
        }

        promedio = suma / 5;
        cout << "Tu promedio final es, " << nombre << ": " << promedio << endl;
        archivo << "Promedio: " << promedio << endl;  // Escribir promedio en el archivo
        archivo << "------------------------------------" << endl;

        // Preguntar si desea procesar de nuevo
        cout << "\n¿Deseas procesar nuevamente las calificaciones? (S/N): ";
        cin >> opcion;
        
    } while (opcion == 'S' || opcion == 's');

    archivo.close();  // Cerrar el archivo

    return 0;
}