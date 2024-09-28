/***********************************************
  Genera el abecedario
  RZS
  27/09/2024
  
***********************************************/

#include <fstream>
#include <iostream>
using namespace std;


int main()
{
    ofstream archivo("Letras.txt");

    for(char letra='A'; letra <='Z'; letra++)
    archivo << letra;
    archivo.close();
    cout<<"el archivo de letras.txt se ha generado"
        <<endl;

    return 0;
}
