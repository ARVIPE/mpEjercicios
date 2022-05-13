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
    FILE * fichero = fopen(nF, "rb");
    if(fichero == NULL){
        printf("Error: no se ha encontrado el fichero");
        exit(-1);
    }
    fseek(fichero, 0, SEEK_END);
    double nbytes = ftell(fichero);
    int tam = nbytes/sizeof(struct alumno);
    fclose(fichero);
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
    
}