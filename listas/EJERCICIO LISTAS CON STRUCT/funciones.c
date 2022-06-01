#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

struct nodo * nuevoElemento()
{
    struct nodo * nuevo = NULL;
    nuevo=(struct nodo*)malloc(sizeof(struct nodo));
    if(nuevo==NULL){
        printf("ERROR: de reserva de memoria");
        exit(-1);
    }
    return nuevo;
}
void insertarDelante(struct nodo **cabeza,struct alumno dato)
{
    struct nodo * nuevo = nuevoElemento();
    nuevo -> dato = dato;

    if((*cabeza)==NULL){
        nuevo->sig=NULL;
    }else{
        nuevo->sig=(*cabeza);
    }
    (*cabeza)=nuevo;
}
void insertarDetras(struct nodo **cabeza,struct alumno dato)
{
    struct nodo * nuevo = nuevoElemento();
    nuevo -> dato = dato;
    nuevo -> sig = NULL;

    if((*cabeza)==NULL){
        (*cabeza)=nuevo;
    }else{
        struct nodo * aux = (*cabeza);
        while(aux->sig!=NULL){
            aux=aux->sig;
        }
        aux->sig=nuevo;
    }
}
void mostrarLista(struct nodo * cabeza)
{
    struct nodo * aux = cabeza;
    while(aux!=NULL){
        printf("Nombre: %s\n", (aux->dato).nombre);
        printf("Edad: %d\n", (aux->dato).edad);
        printf("Nota: %f\n", (aux->dato).nota);
        aux=aux->sig;
    }
}
int contarElementos(struct nodo * cabeza)
{
    struct nodo * aux = (cabeza);
    int contador = 0;
    while(aux!=NULL){
        contador++;
        aux=aux->sig;
    }
    return contador;
}
int buscarAlumno(struct nodo *cabeza, char * nombre)
{
    struct nodo * aux = (cabeza);
        while(aux!=NULL){
            if(strcmp((aux->dato).nombre, nombre)==0){
                return 1;
            }
        aux=aux->sig;   
    }
    return 0;
}
void borrarLista(struct nodo **cabeza)
{
    struct nodo * aux;
    while((*cabeza)!=NULL){
        aux=(*cabeza);
        (*cabeza)=(*cabeza)->sig;
        free(aux);
    }
}