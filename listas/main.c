#include <stdio.h>

int main(){
    struct nodo * cabeza = NULL;
    insertarDelante(&cabeza, 1);
    insertarDelante(&cabeza, 2);
    insertarDelante(&cabeza, 3);
    mostrarLista(cabeza);
}