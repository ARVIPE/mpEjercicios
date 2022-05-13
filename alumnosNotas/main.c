#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char ** argv){
if(argc != 4){
    printf("Error no se han introducido los suficientes argumentos");
    exit(-1);
}

struct alumnos * v = NULL;
int numAlumnos = contarAlumnos(v);

printf("El numero de alumnos es de: %i", numAlumnos);



}