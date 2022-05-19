#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char ** argv){
if(argc!=4){
    printf("ERROR: en linea de argumentos\n");
    exit(-1);
}

bilingue(argv[1], argv[2], argv[3]);


}