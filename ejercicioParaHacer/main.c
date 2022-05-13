/*  Implementar un programa que defina un struct producto, cuyos campos son: 
    un codigo de tipo int, 
    un nombre de tipo cadena[1000],
    unas unidades de tipo int.
El programa recibira por linea de argumentos el tamaño, hacer un rellenar y un mostrar.
1) Implementar una función que calcule por referencia, el producto, que menos unidades tenga y el producto que mas unidades tenga.
2) Funcion que ordena el vector de productor por unidades descendentemente. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char **argv){
    if(argc != 2){
        printf("ERROR en la linea de argumentos\n");
        exit(-1);
    }
    int tam = atoi(argv[1]);
    struct producto * v = NULL;
    v = reservaMemoria(tam);
    rellenarVector(v, tam);
    mostrarVector(v, tam);
    char * menor = menorUnidades(v, tam);
    char * mayor = mayorUnidades(v, tam);
    
    printf("El producto con menor numero de unidades es: %s\n", menor);
    printf("El producto con mayor numero de unidades es: %s\n", mayor);

    ordenarVector(v, tam);
    printf("El vector ordenado es: \n");
    mostrarVector(v, tam);


}