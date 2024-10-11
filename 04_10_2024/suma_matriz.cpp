/******************************************************
 * PROGRAMA QUE MUESTRA UN ARREGLO UNIDIMENSIONALES 
 *  * RZS 
 * 04 OCT 2024
 * ************************************/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define MAXFIL 20
#define MAXCOL 30

using namespace std;
/**CALCULAR LA SUMA DE UNA MATRIZ */
int main()
{
    int nfilas, ncols;
    /**declaración de arreglos*/
    int a[MAXFIL][MAXCOL], b[MAXFIL][MAXCOL], c[MAXFIL][MAXCOL];
    /**declaración de funciones*/
    void leerentrada(int a[][MAXCOL],int nfilas, int ncols);
    void calcularsuma(int a[][MAXCOL], int b[][MAXCOL],
                      int c[][MAXCOL],int nfilas, int ncols);
    void sacarsalida(int c[][MAXCOL],int nfilas, int ncols);
    cout<<"Cuantas filas?";
    cin>>nfilas;
    cout<<"Cuantas columnas?";
    cin>>ncols;
    cout<<endl;
    cout<<"\n\nPrimera tabla :"<<endl;
    leerentrada(a,nfilas,ncols);
    cout<<"\n\nSegunda tabla :"<<endl;
    leerentrada(b,nfilas,ncols);
    calcularsuma(a,b,c,nfilas,ncols);
    cout<<"\nSuma de los elementos\n"<<endl;
    sacarsalida(c,nfilas,ncols);
    return 0;
}

void leerentrada(int a[][MAXCOL],int m, int n)
{
    int fila,col;
    for(fila = 0;fila < m; ++fila)
    {
      cout<<"\nIntroducir datos para la fila "<< fila + 1<<endl;
      for(col = 0;col < n;++col)
      cin>>a[fila][col];
    }
    return;
}


void calcularsuma(int a[][MAXCOL], int b[][MAXCOL],int c[][MAXCOL],int m, int n)
{
    int fila, col;
    for(fila = 0;fila < m; ++fila)
      for(col = 0;col < n; ++col)
        c[fila][col] = a[fila][col] + b[fila][col];
    return;
}


void sacarsalida(int c[][MAXCOL],int m, int n)
{
    int fila, col;
    for(fila = 0; fila < m; ++fila)
    {
        for(col = 0;col < n; ++col)
        cout<<"  "<<c[fila][col];
        cout<<endl;
    }
    return;
}