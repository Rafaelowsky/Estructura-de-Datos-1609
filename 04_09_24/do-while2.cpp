/******************************************************************************

Ejemplo de estructuras o sentencias de control
Programa que muestra el uso de do-while
RZS
04 SEP 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int mes;
    // Este ciclo nos ayuda para que el usuario no meta un mes incorrecto
    // Si es así se repite hasta que el mes este dentro de los parametros
   do
   {
      cout << "Dame el mes: (1, 2, ..., 12): ";
      cin >> mes;
      if (mes < 1 || mes > 12)
         cout << "El valor introducido no es válido.\n";
   }
   while (mes < 1 || mes > 12);

   if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
       mes == 8 || mes == 10 || mes == 12)
      cout << "El mes tiene 31 dias.\n";
   else if (mes == 2)
      cout << "El mes tiene 28 o 29 dias.\n";
   else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
      cout << "El mes tiene 30 dias.\n";
   else
      cout << "¡Imposible!\n";

    return 0;
}
