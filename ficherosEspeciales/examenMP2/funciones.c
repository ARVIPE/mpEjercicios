#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "funciones.h"

void bilingue(char * fichero1, char * fichero2, char * result){

    FILE * ficheroAlumno1;
    ficheroAlumno1=fopen(fichero1, "r");

    if(ficheroAlumno1==NULL){
        printf("ERROR: no se ha encontrado el fichero1");
        exit(-1);
    }

    FILE * ficheroAlumno2;
    ficheroAlumno2=fopen(fichero2, "r");

    if(ficheroAlumno2==NULL){
        printf("ERROR: no se ha encontrado el fichero2");
        exit(-1);
    }

    FILE * resultado;
    resultado=fopen(result, "w");

    if(resultado==NULL){
        printf("ERROR: no se ha encontrado el result");
        exit(-1);
    }

    struct alumno a;
    char aux[500];
    while(fscanf(ficheroAlumno1, "%s %s %s %i %i", a.nombre, a.apellido1, a.apellido2, &a.edad, &a.bilingue)==5){
        if(a.bilingue==1){
            fprintf(resultado,"%s %s %s %i %i\n", a.nombre, a.apellido1, a.apellido2, a.edad, a.bilingue);
        }
    };
    while(fscanf(ficheroAlumno2, "%s %s %s %i %i", a.nombre, a.apellido1, a.apellido2, &a.edad, &a.bilingue)==5){
        if(a.bilingue==1){
            fprintf(resultado,"%s %s %s %i %i\n", a.nombre, a.apellido1, a.apellido2, a.edad, a.bilingue);
        }
    };
    fclose(ficheroAlumno1);
    fclose(ficheroAlumno2);
    fclose(resultado);

}
