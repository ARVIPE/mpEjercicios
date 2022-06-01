#include<stdio.h>
#include "funciones.h"


int main(){

int numeros[] = {25, 50, 75, 100};


int aux = sumaRecur(numeros, 4, 0);

printf("%i", aux);

}