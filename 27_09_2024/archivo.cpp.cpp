#include <iostream>
#include <fstream>

using namespace std;

main()
{
  ofstream archivo("archivo.txt");
    if (!archivo)
    cout<<"error no se puede abrir el archivo"<<endl;
  else {
    cout <<"Generando el archivo.txt con exito!"<<endl;
  archivo << "Hola" << " " << "primer linea "
          << " continuamos"<< endl;
  archivo << "Adios" <<" " << "segunda linea "
          << " finalizamos"<< endl;
  archivo.close();
  }
  return 0;
 }

