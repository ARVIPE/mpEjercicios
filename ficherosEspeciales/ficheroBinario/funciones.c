#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "funciones.h"

void ficheroConMayorPrioridad(char * fichero, char * mayorPriod, int X){
    FILE * fich1=fopen(fichero, "rb");
    if(fich1==NULL){
        printf("ERROR: no se ha podido abrir el fichero correctamente");
        exit(-1);
    }

    FILE * mayorPrioridad=fopen(mayorPriod, "wb");
    if(mayorPrioridad==NULL){
        printf("ERROR: no se ha podido abrir el fichero correctamente");
        exit(-1);
    }

    struct proceso p;
    while(fread(&p, sizeof(struct proceso), 1, fich1)){

        if(p.prioridad>=X){
            fwrite(&p, sizeof(struct proceso), 1, mayorPrioridad);
        }

    }


    fclose(fich1);
    fclose(mayorPrioridad);
}

void ficherosConMenorPrioridad(char * fichero, char * menorPriod, int X){
    
    FILE * fich1=fopen(fichero, "rb");
    if(fich1==NULL){
        printf("ERROR: no se ha podido abrir el fichero correctamente");
        exit(-1);
    }


    FILE * menorPrioridad=fopen(menorPriod, "wb");
    if(menorPrioridad==NULL){
        printf("ERROR: no se ha podido abrir el fichero correctamente");
        exit(-1);
    }


    struct proceso p;
    while(fread(&p, sizeof(struct proceso), 1, fich1)){
        if(p.prioridad<X){
            fwrite(&p, sizeof(struct proceso), 1, menorPrioridad);
        }

    }

    fclose(fich1);
    fclose(menorPrioridad);
}



void mostrarFicheros(char * fichero){
    FILE * fich1=fopen(fichero, "rb");
    if(fich1==NULL){
        printf("ERROR: no se ha podido abrir el fichero correctamente");
        exit(-1);
    }

    struct proceso p;

    while (fread(&p, sizeof(struct proceso), 1, fich1))
    {
        
        printf("Nombre %s, duración %i, prioridad %i\n", p.nombre, p.duracion, p.prioridad);        
    }
    
    fclose(fich1);
}
