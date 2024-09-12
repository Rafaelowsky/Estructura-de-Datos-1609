/*
	Programa que muetra un arreglo bidimensional
	RZS
	11 - Septiembre -2024
*/

// TODO: agregar comentarios
#include <iostream>
using namespace std;

int main() {

 char mes[12][4] = {"ENE","FEB","MAR","ABR","MAY","JUN",
                 	"JUL","AGO","SEP","OCT","NOV","DIC"};

 int i;

 cout<<"MESES\n"<<endl;

 for(i=0; i<12;i++)

    cout<<mes[i]<<endl;

 return 0;


}
