/** Leer un archivo de texto */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  string linea;
  ifstream MiArchivo ("archivo.txt");
  if (MiArchivo.is_open())
  {
    //Mientras que no sea fin de archivo
    while (! MiArchivo.eof() )
    {

      getline (MiArchivo,linea);
      cout << linea << endl;
    }
    MiArchivo.close();
  }
  else cout << "No se pudo abrir el archivo.";
  return 0;
}


