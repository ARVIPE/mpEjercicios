/*
    Autor: Academia Main()
    Web: www.academiamain.es
    Contacto:  605 45 70 99 
*/
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    LA FUNCIÓN ejercicio() RECIBE COMO ARGUMENTOS UN VECTOR DE ELEMENTOS DE TIPO 
    DATO, UN INT QUE REPRESENTA EL TAMAÑO DEL VECTOR, Y UN INT QUE INDICA EL CRITERIO DE 
    ORDENACION:
        1 - ORDENARÁ POR NOMBRE ALFABÉTICAMENTE
        2 - ORDENARÁ POR PESO DESCENDENTEMENTE
        3-  ORDENARÁ POR CÓDIGO ASCENDENTEMENTE

    DESARROLLAR EL MÉTODO DE ORDENACIÓN QUE CONSIDERES.

    UTILIZAR PUNTEROS A FUNCIONES
*/

void ejercicio(struct dato * V, int nElementos, int criterio)
{
    if(criterio==1)
    {
        //COMPLETA AQUÍ
    ordenar(V,nElementos,&nombreAlf);
    }
    else if (criterio==2)
    {
        //COMPLETA AQUÍ
         ordenar(V,nElementos,&peso);
    }
    else if (criterio==3)
    {
        //COMPLETA AQUÍ
         ordenar(V,nElementos,&codigo);
        
    }
}

//COMPLETA AQUÍ CON LAS FUNCIONES QUE NECESITES
void ordenar(struct dato * V, int nElementos, int(*nombreFuncion)(struct dato a, struct dato b))
{
    struct dato aux;
    for(int i = 0; i < nElementos; i++){
        for(int j = i+1; j < nElementos; j++){
            if((*nombreFuncion)(V[i], V[j])==1){
                aux=V[i];
                V[i]=V[j];
                V[j]=aux;
            }
        }
    }
}

int nombreAlf(struct dato a, struct dato b)
{
    if(a.nombre>a.nombre){
        return 1;
    }
    return 0;
}

int peso(struct dato a, struct dato b)
{
    if(a.peso<b.peso){
        return 1;
    }
    return 0;
}

int codigo(struct dato a, struct dato b)
{
    if(a.codigo>b.codigo){
        return 1;
    }
    return 0;
}