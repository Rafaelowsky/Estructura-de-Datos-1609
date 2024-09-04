/******************************************************************************

Programa que muestra el funcionamiento de SWTICH/CASE operaciones
autos RZS
30 AGO 2024

*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
    int num, num1, num2, res;
    float rest1;
    cout << "\t ---------------------------------- " << endl;
    cout << "\t\t\t MENU" << endl;
    cout << "\t ---------------------------------- " << endl;
    cout << "\t\t1. Suma" << endl;
    cout << "\t\t2. Resta" << endl;
    cout << "\t\t3. Multiplicación" << endl;
    cout << "\t\t4. División" << endl;
    cout << "\t\tEscriba la opcion" << endl;
    cin >> num;
    cout << "\t\tEscribe dos números enteros" << endl;
    cin >> num1 >> num2 ;
    
    switch (num)
{
    case 1:
        // cout << "Ha introducido el no 1\n";
        res = num1 + num2;
        cout << "La suma de " << num1 << " y " << num2 << " es " << res;
        break;
    
    case 2:
        res = num1 - num2;
        cout << "La resta de " << num1 << " y " << num2 << " es " << res;
        break;
    
    case 3:
        res = num1 * num2;
        cout << "La mupltiplicacion de " << num1 << " y " << num2 << " es " << res;
        break;
        
    case 4:
        rest1 = num1 / num2;
        cout << "La division de " << num1 << " y " << num2 << " es " << rest1;
        break;
        
    default:
        cout << "Ha introducido otro no valido";
    
    }
    return 0;
}