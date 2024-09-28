/******************************************************************************

Programa que maneja dos arreglos de tipo string
RZS
18-09-2024

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string cadena;
    char res;
    int comp, i, cont;

    string paises[10] = {"CANADA", "INGLATERRA", "FRANCIA", "INDIA", "ISRAEL",
                         "ITALIA", "JAPON", "MEXICO", "CHINA", "EU"};

    string capitales[10] = {"OTTAWA", "LONDRES", "PARIS", "DELHI", "JERUSALEN",
                            "ROMA", "TOKIO", "CDMX", "PEKIN", "WASHINGTON"};

    cout << "\n           PAIS -- CAPITAL\n";
    
    // Mostrar la lista de países y capitales
    for (i = 0; i < 10; i++) {
        cout << paises[i] << " -- " << capitales[i] << endl;
    }

    do {
        cout << "\n\nEscribe un país o una capital de la lista: ";
        getline(cin, cadena);  // Leer la cadena ingresada por el usuario
        cont = 0;
        
        // Comparar la entrada con la lista de países
        for (i = 0; i < 10; i++) {
            if (cadena == paises[i]) {
                cout << "La capital de '" << cadena << "' es: " << capitales[cont] << endl;
                break;
            }
            cont++;
        }

        cont = 0; // Reiniciar el contador

        // Comparar la entrada con la lista de capitales
        for (i = 0; i < 10; i++) {
            if (cadena == capitales[i]) {
                cout << "El país correspondiente a '" << cadena << "' es: " << paises[cont] << endl;
                break;
            }
            cont++;
        }

        // Preguntar si el usuario quiere repetir el proceso
        cout << "\n\n¿Deseas hacerlo de nuevo (s/n)? ";
        res = getchar();
        cin.ignore();  // Limpiar el buffer

    } while (res == 's' || res == 'S');

    cout << "\nHas elegido salir\n";
    return 0;
}