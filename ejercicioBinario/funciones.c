#include<string.h>
#include<stdio.h>
#include "funciones.h"

void addAlumno(char * nF, struct alumno a){
    FILE * fichero = fopen(nF, "ab");
    if(fichero == NULL){
        printf("Error: no se ha encontrado el fichero");
        exit(-1);
    }
    struct alumno a;
    fwrite(&a, sizeof(struct alumno), 1, fichero);
    fclose(fichero);
}

void mostrarFichero(char * nF){
    FILE * fichero = fopen(nF, "rb");
    if(fichero == NULL){
        printf("Error: no se ha encontrado el fichero");
        exit(-1);
    }
    struct alumno a;
    while(fread(&a, sizeof(struct alumno), 1, fichero)){
        printf("Nombre: %s\n", a.nombre);
        printf("Curso: %i\n", a.curso);
        printf("Nota: %f\n", a.nota);
    }
}

int contarRegistros(char * nF){
    FILE * fich=fopen(nF, "rb");
    if(fich == NULL){
        printf("ERROR: no se encontró el fichero");
        exit(-1);
    }
    fseek(fich, 0, SEEK_END);
    double nbytes = ftell(fich);
    int tam=nbytes/sizeof(struct alumno);
    fclose(fich);
    return tam;
}

void mediaNota(char * nF, float * media){
    FILE * fichero = fopen(nF, "rb");
    if(fichero == NULL){
        printf("Error: no se ha encontrado el fichero");
        exit(-1);
    }
    float cont = 0;
    float suma = 0;
    struct alumno a;
    while (fread(&a, sizeof(struct alumno), 1, fichero))
    {
        suma+=a.nota;
        cont++;
    }
    fclose(fichero);
    return (*media=suma/cont);
}

int modificarAlumno(char * nF, char * nombre, float nota){
    FILE * fichero = fopen(nF, "rb+");
    if(fichero == NULL){
        printf("ERROR: no se encontró el  fichero\n");
        exit(-1);
    }
    struct alumno a;
    while (fread(&a, sizeof(struct alumno), 1, fichero)==1)
    {
        if(strcmp(a.nombre, nombre)==0){
            a.nota=nota;
            fseek(fichero, -1*sizeof(struct alumno), SEEK_CUR);
            fwrite(&a, sizeof(struct alumno), 1, fichero);
        }
    }
    fclose(fichero);
    
}