/******************************************************************************

OBJETIVO DEL PROGRAMA:  programa que maneja una pila
FECHA 11 OCT 2024
AUTOR RZS

*******************************************************************************/

#include <iostream>
#include <cstdlib>  // para rand() y exit()
using namespace std;

#define FALSO 0
#define CIERTO 1

// Estructura de la pila
struct Pila {
    int dato;
    Pila* siguiente;
};

// Tipos de punteros para la pila
typedef Pila* Pilaptr;
typedef Pilaptr* Pilaref;

// Declaración de funciones
void Push(Pilaptr nuevo, Pilaref lista);
void Pop(Pilaref nuevo, Pilaref lista);
void Agregar();
void Borrar();
void MostrarLista(Pilaptr p);
void Desplegar();

// Variables globales para la pila
Pilaptr disponible = nullptr;
Pilaptr PilaLista = nullptr;

int main() {
    int hecho = FALSO;
    int c;

    while (!hecho) {
        cout << "\n\t1. Push (Meter) un elemento\n";
        cout << "\n\t2. Pop (Sacar) un elemento\n";
        cout << "\n\t3. Mostrar pila\n";
        cout << "\n\t4. Salir\n";
        cout << "\n\t   Elija la opcion deseada: ";
        cin >> c;

        switch (c) {
            case 1:
                Agregar();
                break;
            case 2:
                Borrar();
                Desplegar();
                break;
            case 3:
                Desplegar();
                break;
            case 4:
                hecho = CIERTO;
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    }

    return 0;
}

// Mete un elemento a la pila
void Push(Pilaptr nuevo, Pilaref lista) {
    nuevo->siguiente = *lista;
    *lista = nuevo;
}

// Saca un elemento de la pila o crea uno nuevo si está vacía
void Pop(Pilaref nuevo, Pilaref lista) {
    int dato;
    if (*lista == nullptr) {
        *nuevo = new Pila;  // En lugar de malloc se usa new en C++
        cout << "\nDato: ";
        cin >> dato;
        (*nuevo)->dato = dato;
    } else {
        *nuevo = *lista;
        *lista = (*lista)->siguiente;
    }
}

// Agrega un nuevo elemento a la pila
void Agregar() {
    Pilaptr nuevo;
    Pop(&nuevo, &disponible);
    if (nuevo->dato < 0)
        nuevo->dato = rand();
    Push(nuevo, &PilaLista);
}

// Borra algún elemento de la pila
void Borrar() {
    Pilaptr nuevo;
    Pop(&nuevo, &PilaLista);
    Push(nuevo, &disponible);
}

// Muestra la lista de elementos en la pila
void MostrarLista(Pilaptr p) {
    while (p != nullptr) {
        cout << p->dato << endl;
        p = p->siguiente;
    }
}

// Despliega el contenido de la pila
void Desplegar() {
    cout << "\nPILA DISPONIBLE:\n";
    MostrarLista(disponible);
    cout << "\nELEMENTOS DE LA PILA:\n";
    MostrarLista(PilaLista);
}
