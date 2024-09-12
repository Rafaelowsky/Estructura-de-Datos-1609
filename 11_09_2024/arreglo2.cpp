/*
	Programa que muetra un arreglo bidimensional
	RZS
	11 - Septiembre -2024
*/

// TODO: ciclo while para listas
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	system("color E9");

	int A[][3]={{4,2},{4,0,8},{6},{9,1}};

	   for (int fila = 0; fila < 4; fila ++) {
	     for(int columna = 0; columna < 3; columna++)
	     cout << A [fila][columna] << " ";
	     cout << endl;
	   }

}
