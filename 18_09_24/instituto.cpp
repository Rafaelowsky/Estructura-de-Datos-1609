/**Un instituto registra los datos de los alumnos que llevan
cursos de extension,
el monto que paga cada alumno depende del curso que lleva:
             Curso     Monto(S/.)
             Java      580
             c++       420
             .net      600
Asimismo, de acuerdo al turno en el que se matricula el
monto de la matricula
se incrementa en:
              Turno     Incremento(%)
              Mañana        0
              Tarde         5
              Noche         10
Ademas, al final del curso el alumno debe realizar un pago
de S/.25.00 por
derecho de examen. Mostrar el monto final que paga los N
alumnos del instituto,
asi como la cantidad de alumnos que llevan los cursos de
java, c++ y .NET. */

#include <iostream>
#include <stdio.h>

using namespace std;

struct alumno
{
       char nom[40], cur, tur;
       double mont, inc, tot;
};

int i, n;

void ingresar(int &n, alumno a[80]);
void calcularTotal(int n, alumno a[80]);
void calcularCantidad(int n, alumno a[80]);
void imprimir(int n, alumno a[80]);


int main()
{

      alumno a[80];

      ingresar(n, a);
      calcularTotal(n, a);
      calcularCantidad(n, a);
      imprimir(n, a);
      cout<<"\n";
      return 0;
}

void ingresar(int &n, alumno a[80]){
     cout<<"Ingresar cantidad de alumnos: ";
     cin>>n;
     for(i=0; i<n; i++){
         cout<<"\nIngresar nombre: ";
         fflush(stdin);
         cin.getline(a[i].nom, 40, '\n');
         cout<<"Ingresar curso: ";
         cin>>a[i].cur;
         cout<<"Ingresar turno: ";
         cin>>a[i].tur;
     }
}

void calcularTotal(int n, alumno a[80]){
     for(i=0; i<n; i++)
         switch(a[i].cur)
         {
               case 'j':
               case 'J':
                    a[i].mont=580;
                    break;

               case 'c':
               case 'C':
                    a[i].mont=420;
                    break;

               case 'n':
               case 'N':
                    a[i].mont=600;
                    break;
         }
     for(i=0; i<n; i++)
         switch(a[i].tur)
         {
                case 'm':
                case 'M':
                     a[i].inc=0;
                     break;

                case 't':
                case 'T':
                     a[i].inc=0.05*a[i].mont;
                     break;

                case 'n':
                case 'N':
                     a[i].inc=0.10*a[i].mont;
                     break;
         }
     for(i=0; i<n; i++)
         a[i].tot=a[i].mont+a[i].inc+25.00;
}

void calcularCantidad(int n, alumno a[80]){
     int cj=0, cc=0, cn=0;
     for(i=0; i<n; i++)
         switch(a[i].cur){
               case 'J':
               case 'j':
                    cj++;
                    break;
               case 'c':
               case 'C':
                    cc++;
                    break;
               case 'n':
               case 'N':
                    cn++;
                    break;
         }
     cout<<"\nLa cantidad de alumnos que llevan Java son " <<cj <<endl
         <<"\nLa cantidad de alumnos que llevan C++ son " <<cc <<endl
         <<"\nLa cantidad de alumnos que llevan NET son " <<cn <<endl;
}

void imprimir(int n, alumno a[80]){
     cout<<"\n\n\tNOMBRE\t\t\t\tCURSO\tTURNO\tMONTO\tINCR\tTOTAL\n\n" <<endl;
     for(i=0; i<n; i++)
         cout<<a[i].nom<<"\t\t\t\t"
             <<a[i].cur<<"\t"
             <<a[i].tur<<"\t"
             <<a[i].mont<<"\t"
             <<a[i].inc<<"\t"
             <<a[i].tot<<endl;
}