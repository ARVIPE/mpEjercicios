#include <string.h>
#include <stdio.h>
#include "funciones.h"

void addActor(char * nF, struct actor a){
    FILE * fich = fopen(nF, "ab");
    if(fich==NULL){
        printf("Error...");
        exit(-1);
    }
    fwrite(&a, sizeof(struct actor), 1, fich);
    fclose(fich);
}

void mostrarActor(char * nF, struct actor a){
    FILE * fich = fopen(nF, "rb");
    if(fich==NULL){
        printf("Error...");
        exit(-1);
    }
    struct actor a;
    while(fread(&a, sizeof(struct actor), 1, fich)){
        printf("Nombre: %s\n", a.nombre);
        printf("Nacionalidad: %s\n", a.nacionalidad);
        printf("Sueldo:%f\n", a.sueldo);
    }
    fclose(fich);
}

int buscarActor(char * nF, char * actor){
    FILE * fich = fopen(nF, "rb");
    if(fich==NULL){
        printf("Error...");
        exit(-1);
    }
    struct actor a;
    while(fread(&a, sizeof(struct actor), 1, fich)){
        if(strcmp(a.nombre, actor)==0){
            fclose(fich);
            return 1;
        }
    }
    fclose(fich);
    return 0;
}

void calcularMedia(char * nF, float * media){
    FILE * fich = fopen(nF, "rb");
    if(fich==NULL){
        printf("Error...");
        exit(-1);
    }
    float cont = 0;
    float suma = 0;
    struct actor a;
    while(fread(&a, sizeof(struct actor), 1, fich)){
        suma=+a.sueldo;
        cont++;
    }
    fclose(fich);
    return (*media=suma/cont);
}

void modificarActor(char * nF, char * nombre, float sueldo){
    FILE * fich = fopen(nF, "rb+");
    if(fich==NULL){
        printf("Error");
        exit(-1);
    }
    struct actor a;
    while(fread(&a, sizeof(struct actor), 1, fich)==1){
        if(strcmp(a.nombre, nombre)==0){
            a.sueldo=sueldo;
            fseek(fich, -1*sizeof(struct actor), SEEK_CUR);
            fwrite(&a, sizeof(struct actor), 1, fich);
        }
    }
    fclose(fich);
}

int contarRegistros(char * nF){
    FILE * fich=fopen(nF, "rb");
    if(fich==NULL){
        printf("Error...");
        exit(-1);
    }
    fseek(fich, 0, SEEK_END);
    double nbytes = ftell(fich);
    int tam = nbytes/sizeof(struct actor);
    fclose(fich);
    return tam; 
}

void borrarActor(char *nF, char * nombre){
    FILE * fich = fopen(nF, "wb");
    if(fich==NULL){
        printf("Error");
        exit(-1);
    }
    FILE * fDestino=fopen("aux.txt", "wb");
    if(fich==NULL){
        printf("Error");
        exit(-1);
    }
    struct actor a;
    while(fread(&a, sizeof(struct actor), 1, fich)==1){
        if(strcmp(a.nombre, nombre)!=0){
            fwrite(&a, sizeof(struct actor), 1, fDestino);
        }
    }
    fclose(fich);
    fclose(fDestino);
    remove(nF);
    rename("aux.txt", nF);

}