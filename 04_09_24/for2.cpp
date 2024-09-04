/******************************************************************************

Ejemplo de estructuras o sentencias de control
Programa que muestra el uso de for
RZS
04 SEP 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int i;
   cout << "Bucle 0 al 10\n" << endl;
   for (i = 0; i <= 10; ++i)
   {
      cout << i << endl;
   }

   cout << "\nBucle 10 al 0\n" << endl;
   for (i = 10; i >= 0; --i)
   {
      cout << i << endl;
   }

   cout << "\nBucle con pares del 0 al 20\n" << endl;
   for (i = 0; i <= 20; i += 2)
   {
      cout << i << endl;
   }

   cout << "\nBucle con potencias de 3 del 1 al 100\n" << endl;
   for (i = 1; i <= 100; i *= 3)
   {
      cout << i << endl;
   }

   //Este bucle no se ejecuta
   for (i = 10; i <=0; --i)
   {
      cout << i << endl;
   }
   
    return 0;
}