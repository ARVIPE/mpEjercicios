#include<stdio.h>
#include<stdlib.h>
#include"funciones.h"

struct nodo * nuevoElemento(){
    struct nodo * nuevo = NULL;
    nuevo=(struct nodo*)malloc(sizeof(struct nodo));
    if(nuevo==NULL){
        printf("Error...");
        exit(-1);
    }
    return nuevo;
}

void insertarDelante(struct nodo**cabeza, int dato){
    struct nodo * nuevo = nuevoElemento();
    nuevo -> dato = dato;

    if((*cabeza)==NULL){
        nuevo->sig=NULL;
    }else{
        nuevo->sig=(*cabeza);
    }
    (*cabeza)=nuevo;
}

void insertarDetras(struct nodo**cabeza, int dato){
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

int buscarElemento(struct nodo** cabeza, int dato){
    struct nodo * aux = (*cabeza);
        while(aux!=NULL){
            if(aux->dato == dato){
                return 1;
            }
            aux=aux->sig;
    }
    return 0;
}

int contarElementos(struct nodo** cabeza){
    struct nodo * aux = (*cabeza);
    int contador = 0;
    while(aux!=NULL){
        contador++;
        aux=aux->sig;
    }
    return contador;
}

int calcularMedia(struct nodo** cabeza){
    struct nodo * aux = (*cabeza);
    int contador = 0, media = 0;
    while(aux!=NULL){
        contador++;
        media+=aux->dato;

        aux=aux->sig;
    }

    return media=media/contador;
}


void mostrarLista(struct nodo * cabeza){
    struct nodo * aux = cabeza;
    while(aux!=NULL){
        printf("%d\n", aux->dato);
        aux=aux->sig;
    }
}

void borrarElemento(struct nodo ** cabeza, int dato){
    struct nodo * aux = (*cabeza);
    struct nodo * ant;
    while(aux != NULL && aux->dato != dato){
        ant=aux;
        aux=aux->sig;
    }
    if(aux!=NULL){
        if(aux==(*cabeza)){
            (*cabeza)=(*cabeza)->sig;
        }else{
            ant->sig=aux->sig;
        }
        free(aux);
    }
}

void volcarVector(struct nodo * cabeza){
    struct nodo * aux = cabeza;
    struct vector * desp;

    while(aux!=NULL){

        aux=aux->sig;
    }
    
}