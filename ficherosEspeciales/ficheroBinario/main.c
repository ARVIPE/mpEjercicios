#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "funciones.h"

int main(int argc, char ** argv){
    if(argc!=4){
        printf("ERROR: faltan argumentos\n");
        exit(-1);
    }

    mostrarFicheros(argv[1]);
    
    int X = 0;

    printf("Introduzca un valor para la X: \n");
    scanf("%i", &X);

    ficheroConMayorPrioridad(argv[1], argv[2], X);
    ficherosConMenorPrioridad(argv[1], argv[3], X);


    mostrarFicheros(argv[2]);
    printf("Menor Priod\n");
    mostrarFicheros(argv[3]);

}

