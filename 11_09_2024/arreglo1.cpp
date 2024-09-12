/*
	Programa que muetra un arreglo bidimensional
	RZS
	11 - Septiembre -2024
*/

// TODO: Ciclo while para poder iterar sobre listas
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
int A[][4] = {{1,2,3,4},{5,6,7,8}};

	system("color E9"); // Cambia el color del Shell

   for(int fila = 0; fila < 2; fila ++) { // Esta primera sentencia itera para las filas
     for(int columna = 0; columna < 4; columna ++) // Esta sentencia itera para las columnas
     cout << A [fila] [columna] << " ";
     cout << endl;
   }

   return 0;

}
