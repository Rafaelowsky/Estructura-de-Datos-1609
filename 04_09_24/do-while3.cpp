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
    int opcion;
   double celsius, kelvin;
   // Aqui el ciclo do while sirve por si el usuario introduce una opcion erronea
   do
   {
      cout << "Este programa transforma temperaturas.\n";
      cout << "Elija una opcion:\n";
      cout << "1. De grados celsius a grados kelvin\n";
      cout << "2. De grados kelvin a grados celsius \n\n";
      cout << "Por favor, introduzca su opcion (1 o 2): ";
      cin >> opcion;
      if (opcion != 1 && opcion !=2)
         cout << "La opción elegida no es válida\n";
   }
   while (opcion != 1 && opcion !=2);

   switch(opcion)
   {
      double celsius, kelvin;
      case 1: // paso de Celsius a Kelvin
         cout << "Introduzca la temperatura en grados Celsius: ";
         cin >> celsius;
         if (celsius >= -273)
         {
         kelvin = celsius + 273;
         cout << celsius << " grados C son " << kelvin << " grados K.\n";
         }
         else
         cout<<"Temperatura por debajo del cero absoluto.\n";
      break;
      case 2: // paso de Kelvin a Celsius
         cout << "Introduzca la temperatura en grados kelvin: ";
         cin >> kelvin;
         if (kelvin >= 0)
         {
            celsius = kelvin - 273;
            cout << kelvin << " grados K son " << celsius << " grados C.\n";
         }
         else
            cout<<"Temperatura por debajo del cero absoluto.\n";
         break;
      default:  // Puede obviarse en este caso
         cout<<"La opcion escogida no es valida.\n";
   }
    return 0;
}
