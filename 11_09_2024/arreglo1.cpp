/*
	Programa que muetra un arreglo bidimensional
	RZS
	11 - Septiembre -2024
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int A[][4] = {{1,2,3,4},{5,6,7,8}};
    int filas = 0;
    int columnas = 0;

        system("color E9"); // Cambia el color del Shell

       for(int fila = 0; fila < 2; fila ++) { // Esta primera sentencia itera para las filas
         for(int columna = 0; columna < 4; columna ++) // Esta sentencia itera para las columnas
         cout << A [fila] [columna] << " ";
         cout << endl;
       }

        /* No se puede hacer con while porque size no es para matrices
            es un método que es para los datos tipo int
       while ( filas < A.size()) {
            columnas = 0;
            while (columnas <  A[filas].size()) {
                cout << "Elemento en [ " << filas << "][" << columnas << "]: " << A[filas][columnas] << endl;
            }
       }
       */
       return 0;
}
