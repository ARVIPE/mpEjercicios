#include <stdio.h>

void insertarDelante(struct nodo ** cabeza, int dato){
    struct nodo * nuevo = nuevoElemento();
    (*nuevo).dato=dato;
    if((*cabeza)==NULL);{
    (*nuevo).dato=dato;
    }else{
        nuevo->sig=(*cabeza);
    }
    (*cabeza)=nuevo;
}