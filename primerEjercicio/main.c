/*  Implementar un programa que defina la estructura alumnos. La cual tendrá un campo nombre de tipo cadena
 *  y tamaño 1024, dni de tipo long, nota de tipo real. El programa deberá recibir por linea de argumentos
 *  el número de alumnos a introducir por memoria dinámica.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char ** argv){
    if(argc != 2){
        printf("ERROR en linea de argumentos\n");
        exit(-1);
    }
    int tam = atoi(argv[1]);
    struct alumno * v = NULL;
    v = reservaMemoria(tam);
    rellenarVector(v, tam);
    mostrarVector(v, tam);

    long dni;
    printf("Introduce el dni a buscar: ");
    scanf("%ld", &dni);
    int encontrado = buscarAlumno(v, tam, dni);
    if(encontrado == 1){
        printf("Se ha encontrado el alumno");
    }else{
        printf("No se ha encontrado el alumno");
    }

    char nombre[1024];
    printf("Introduce el nombre: \n");
    getchar();
    fgets(nombre, 1024, stdin);

    int aparecido = buscarAlumnoNombre(v, tam, nombre);
    if(aparecido == 1){
        printf("Se ha encontrado el alumno");
    }else{
        printf("No se ha encontrado el alumno");
    }

    float media;
    mediaNota(v, tam, &media);
    printf("La media es %f\n", media);
    liberaMemoria(&v);

    
    
}