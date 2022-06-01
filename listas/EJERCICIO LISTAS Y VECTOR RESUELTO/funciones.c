#include "funciones.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    La función de abajo recibe un vector como primer argumento, el número de elementos del 
    vector como segundo argumento, una lista como tercer argumento y una variable real llamada
    límite como cuarto argumento.

    La función deberá volcar los datos del vector a la lista siguiente respetando las siguientes
    normas:
        1) Solo se volcarán a la lista los elementos del vector cuyo peso sea inferior al 
            limite que se recibe como cuarto argumento.
        2) Los elementos deben quedar en la lista en orden inverso a como se encuentran en el vector.
    
    Además la función debe retornar el número de elementos que se han volcado a la lista.
*/

int ejercicio(struct dato * VECTOR, int NUMELEMENTOS, struct lista ** LISTA, float limite)
{
    //COMPLETAR AQUÍ
    vectorALista(VECTOR,NUMELEMENTOS,LISTA,limite);
    int cont = contarElementos(*LISTA);

    //NO OLVIDES CAMBIAR EL RETURN
    return cont;
}

void vectorALista(struct dato * v,int tam,struct lista ** lista,float limite)
{
    for (int i = 0; i < tam; i++)
    {
        if(v[i].peso < limite)
        {
            apilar(lista,v[i]);
        }
    }
    
}

int contarElementos(struct lista * lista)
{
    struct lista * aux = lista;
    int cont = 0;
    while(lista!=NULL)
    {
        cont++;
        lista=lista->siguiente;
    }
    return cont;
}

struct lista * nuevoElemento()
{
    struct lista * l = NULL;
    l=(struct lista *)malloc(sizeof(struct lista));
    if(l==NULL)
    {
        printf("Error al reservar memoria para un nodo\n");
        exit(-1);
    }
    return l;
}

void apilar(struct lista ** lista, struct dato elemento)
{
    struct lista * nuevo = nuevoElemento();
    nuevo->elemento=elemento;
    nuevo->siguiente = (*lista);
    (*lista) = nuevo;
}