/******************************************************************************

OBJETIVO DEL PROGRAMA:  programa que maneja una pila
FECHA 11 NOV 2024
AUTOR RZS

*******************************************************************************/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define FALSO 0
#define CIERTO 1

using namespace std;

//programa de pilas



typedef struct pila {
    int dato;
    struct pila *siguiente;
}Pila;

typedef Pila *Pilaptr;
typedef Pilaptr *Pilaref;

void Push(Pilaptr nuevo,Pilaref lista);
void Pop(Pilaref nuevo,Pilaref lista);
void Agregar(void);
void Borrar(void);
void MostrarLista(Pilaptr p);
void Desplegar(void);

Pilaptr disponible;
Pilaptr PilaLista;

int main()
{
    int hecho = FALSO;
    int c;

    while(!hecho)
    {
       // system("cls");
        printf("\n\t1.Push(Meter) un elemento\n");
        printf("\n\t2.Pop(Sacar) un elemento\n");
        printf("\n\t3.Mostrar pila\n");
        printf("\n\t4.Salir\n");
        printf("\n\t          Elija la opcion deseada ");
        scanf("%d",&c);
        switch (c)
        {
          case 1:
            Agregar();
            break;
          case 2:
            Borrar();
            Desplegar();
           // system("pause");
            break;
          case 3:
            Desplegar();
        //    system("pause");
            break;
          case 4:
            hecho = CIERTO;
            break;
        }
    }
    //system("pause");
    return 0;


}

// Mete un elemento a la pila
void Push (Pilaptr nuevo, Pilaref lista)
{
    nuevo->siguiente = *lista;
    *lista = nuevo;
}

/* Saca el nuevo  elemento de la pila a crea uno nuevo
de la pila vacia */

void Pop(Pilaref nuevo,Pilaref  lista)
{
    int  dato;
    if (*lista == NULL)
    {
          *nuevo = (Pilaptr)malloc (sizeof(struct pila));
          printf("\nDato: ");
          scanf("%d",&dato);
          (*nuevo)->dato  = dato;
        } else
        {
            *nuevo = *lista;
            *lista = (*lista)->siguiente;
        }
}

// agrega elemento a la pila
void Agregar(void)
{
    Pilaptr nuevo;
    Pop(&nuevo, &disponible);
    if(nuevo->dato < 0)
      nuevo->dato = rand();
    Push(nuevo,&PilaLista);
}

// Borra algun elemento de la pila
void Borrar(void)
{
    Pilaptr nuevo;
    Pop(&nuevo,&PilaLista);
    Push(nuevo, &disponible);
}

void MostrarLista(Pilaptr p)
{
       while (p != NULL)
       {
            printf("%d\n", p->dato);
            p = p->siguiente;
    }
}

 // Despliega
 void Desplegar(void)
 {
       printf("\nPILA: \n");
       MostrarLista(disponible);
       printf("\nElemento de la pila: \n ");
       MostrarLista(PilaLista);
}
