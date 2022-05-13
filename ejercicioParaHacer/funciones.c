#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

struct producto * reservaMemoria(int tam){
    struct producto * v = NULL;
    v = (struct producto * )malloc(sizeof(struct producto)*tam);
    if(v==NULL){
        printf("Error reserva memoria \n");
        exit(-1);
    }
    return v;
}

void rellenarVector(struct producto * v, int tam){
    for(int i = 0; i < tam; i++){
        printf("Introduzca codigo de producto\n");
        scanf("%i", &v[i].codigo);
        printf("Introduzca nombre de producto\n");
        getchar();
        fgets(v[i].nombre, 1000, stdin);
        printf("Introduzca el numero de unidades de este producto\n");
        scanf("%i", &v[i].unidades);
        
    }
}

void mostrarVector(struct producto * v, int tam){
    for(int i = 0; i < tam; i++){
        printf("------------------\n");
        printf("Codigo:%i\n", v[i].codigo);
        printf("Nombre:%s\n", v[i].nombre);
        printf("Unidades:%i\n", v[i].unidades);
        printf("------------------\n");
    }
}

char * menorUnidades(struct producto * v, int tam){
    int aux = v[0].unidades;
    char * nombre = v[0].nombre;
    for(int i = 0; i < tam; i++){
        if(v[i].unidades < aux){
            aux=v[i].unidades;
            nombre = v[i].nombre;
        }
    }
    return nombre;
}

char * mayorUnidades(struct producto * v, int tam){
    int aux = v[0].unidades;
    char * nombre = v[0].nombre;
    for(int i = 0; i < tam; i++){
        if(v[i].unidades > aux){
            aux=v[i].unidades;
            nombre = v[i].nombre;
        }
    }
    return nombre;
}

void ordenarVector(struct producto * v, int tam){
    struct producto * aux = NULL;
    aux = (struct producto * )malloc(sizeof(struct producto)*tam);
    if(aux==NULL){
        printf("Error reserva memoria \n");
        exit(-1);
    }
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam-i; j++){
            if(v[j].unidades<v[j+1].unidades){
                aux[0]=v[j];
                v[j]=v[j+1];
                v[j+1]=aux[0];
            }
        }
    }
}