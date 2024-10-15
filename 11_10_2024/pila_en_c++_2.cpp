/******************************************************************************

OBJETIVO DEL PROGRAMA:  programa que maneja una pila
FECHA 11 NOV 2024
AUTOR CCS

*******************************************************************************/

#include <iostream>
#include <cstdlib>  // para calloc y exit
using namespace std;

/** Funciones */
void apilar();
void desapilar();
void vacia();
void visualcima();
void crear();
void lista();

/** Variables */
int elementos, cima = 0, i = 0, primerouno = 0, *pila = nullptr;
int opcion;

int main() {
    do {
        cout << "\t\t\t\t****************\n";
        cout << "\t\t\t\t1. Crear pila\n";
        cout << "\t\t\t\t2. Apilar\n";
        cout << "\t\t\t\t3. Desapilar\n";
        cout << "\t\t\t\t4. Pila vacia\n";
        cout << "\t\t\t\t5. Cima\n";
        cout << "\t\t\t\t6. Listado\n";
        cout << "\t\t\t\t7. Salir\n";
        cout << "\t\t\t\tElija opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crear();
                break;
            case 2:
                apilar();
                break;
            case 3:
                desapilar();
                break;
            case 4:
                vacia();
                break;
            case 5:
                visualcima();
                break;
            case 6:
                lista();
                break;
            case 7:
                break;
            default:
                cout << "La opcion no es valida\n";
                break;
        }
    } while (opcion != 7);

    // Liberar la memoria asignada a la pila
    if (pila != nullptr) {
        free(pila);
    }

    return 0;
}

/** Crear la pila */
void crear() {
    if (cima == 0) {
        cout << "\nCuantos elementos tiene la pila? ";
        cin >> elementos;

        /** Reserva de memoria */
        pila = (int*)calloc(elementos, sizeof(int));
        if (pila == nullptr) {
            cout << "No hay memoria suficiente\n";
        } else {
            cima = 0;
            primerouno = 1;
        }
    } else {
        cout << "\nElimine antes todos los elementos de la anterior pila\n";
    }
}

/** Apilar elemento */
void apilar() {
    if (primerouno == 0) {
        cout << "\nDebe crear la pila antes\n";
    } else {
        if (cima == elementos) {
            cout << "\nLa pila ya esta llena\n";
        } else {
            cout << "\nIntroduzca dato: ";
            cin >> *(pila + cima);
            cima++;
        }
    }
}

/** Desapilar elemento */
void desapilar() {
    if (primerouno == 0) {
        cout << "\nDebe crear la pila antes\n";
    } else {
        if (cima == 0) {
            cout << "\nLa pila esta vacia\n";
        } else {
            cout << "\nEl elemento desapilado es el " << *(pila + (cima - 1)) << "\n";
            cima--;

            if (cima == 0) {
                primerouno = 0;
            }
        }
    }
}

/** Verificar si la pila está vacía */
void vacia() {
    if (cima == 0) {
        cout << "\nLa pila esta vacia\n";
    } else {
        cout << "\nLa pila no esta vacia\n";
    }
}

/** Visualizar la cima de la pila */
void visualcima() {
    if (cima == 0) {
        cout << "\nNo hay elementos en la pila\n";
    } else {
        cout << "\nDe un maximo de " << elementos << " elementos, la cima esta en la posicion " << cima;
        cout << "\nLa cima contiene el valor: " << *(pila + (cima - 1)) << "\n";
    }
}

/** Listar elementos de la pila */
void lista() {
    cout << "Elementos de la pila:\n";
    for (i = 0; i < cima; i++) {
        cout << " " << *(pila + i);
    }
    cout << endl;
}
