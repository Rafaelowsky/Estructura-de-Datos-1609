/*
	Programa que muetra un arreglo unidimensional
	RZS
	11 - Septiembre -2024
*/

// TODO: hacer que el programa funcione con comandos de c++
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

	cout << "Este es el inicio del programa" << endl;
    system ("color E9");
    float cal [5], promedio, suma;
    char nombre[25];
    cout << "Introduce tu nombre ";	//puts("introduce nombre: ");
    cin >> nombre;
	// gets(nombre);
    // getline(cin,nombre);
    for (int cont = 0; cont < 5; cont++)
    {
       //cout << "Ingresa cal " << cal[0];
	   printf("ingresa cal %d: ",cont + 1);
    	//cin >> cal [cont];
		scanf("%f", & cal[cont]);
       suma += cal[cont];
    }
    puts("\nlas calificaciones son ");
    for (int cont = 0; cont < 5; cont++)
    {
        printf("cal %d: ",cont + 1);
        printf("%.2f",cal[cont]);
        puts("");
    }
     promedio=suma/5;
     printf("\n%s tu promedio final es %.2f",nombre,promedio);
     system("pause>null");
     return 0;

}
