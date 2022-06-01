//Implementar un programa que cree una lista de enteros. Insertar varios elementos en la  lista, uno por delante y otro por detras.
//Implementar la siguiente funcionalidad: mostar la lista, buscar elemento en la lista, contar los elementos de la lista, calcular la media
//por referencia. Borrar un elemento de la lista, volcar la lista en un vector. Ordenar el vector, asc. o desc.
//Volcar despues el vector a otra lista.
#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"

int main(){

    struct nodo * cabeza = NULL;
    insertarDelante(&cabeza, 1);
    insertarDelante(&cabeza, 2);
    insertarDetras(&cabeza, 3);
    mostrarLista(cabeza);
    int encontrado = buscarElemento(&cabeza, 3);
    if(encontrado == 1){
        printf("ENCONTRADO!!!\n");
    }
    int contador = contarElementos(&cabeza);
    printf("La lista tiene %i elementos\n", contador);
    int media = calcularMedia(&cabeza);
    printf("La media es de %i\n", media);
    borrarElemento(&cabeza, 3);
    mostrarLista(cabeza);
    volcarVector(cabeza, contador-1);
}
