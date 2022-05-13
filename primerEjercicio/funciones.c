#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

struct alumno * reservaMemoria(int tam){
    struct alumno * v = NULL;
    v = (struct alumno * )malloc(sizeof(struct alumno)*tam);
    if(v==NULL){
        printf("Error reserva memoria \n");
        exit(-1);
    }
    return v;
}

void rellenarVector(struct alumno * v, int tam){
    for(int i = 0; i < tam; i++){
        printf("Introduce el nombre:\n");
        fgets(v[i].nombre, 1024, stdin);
        v[i].nombre[strlen(v[i].nombre)-1]='\0';

        printf("Introduce el dni: \n");
        scanf("%ld", &v[i].dni);

        printf("Introduce la nota: \n");
        scanf("%f", &v[i].nota);

        getchar();
    }
}

void mostrarVector(struct alumno * v, int tam){
    for(int i = 0; i<tam; i++){
        printf("Nombre: %s\n", v[i].nombre);
        printf("DNI: %ld\n", v[i].dni);
        printf("Nota: %f\n", v[i].nota);
    }
}

int buscarAlumno(struct alumno * v, int tam, long dni){
    for(int i = 0; i < tam; i++){
        if(v[i].dni == dni){
            return 1;
        }
    }
    return 0;
}

int buscarAlumnoNombre(struct alumno * v, int tam, char * nombre){
    for(int i = 0; i < tam; i++){
        if(strcmp(v[i].nombre,nombre)==0){
            return 1;
        }
    }
    return 0;
}

void mediaNota(struct alumno * v, int tam, float * media){
    float suma = 0;
    for(int i = 0; i < tam; i++){
        suma=suma+v[i].nota;
    }
    (*media)=suma/tam;
}

void liberaMemoria(struct alumno ** v){
    free(*v);
    (*v)=NULL;
}