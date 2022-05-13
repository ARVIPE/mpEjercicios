#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int contarAlumnos(struct alumnos * v){
   FILE * fichero;
   fichero=fopen("alumnos.txt", "rb");
   if(fichero==NULL){
       printf("Error: no se pudo abrir el fichero");
       exit(-1);
   }

   int i = 0, contador = 0;
    do{

        if(v[i].nombreApellido != NULL){
            contador++;
        }
        i++;

    }while(!feof(fichero));

    return contador;

}

