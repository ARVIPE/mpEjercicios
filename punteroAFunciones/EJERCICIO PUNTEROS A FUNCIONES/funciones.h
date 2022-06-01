/*
    Autor: Academia Main()
    Web: www.academiamain.es
    Contacto:  605 45 70 99 
*/
#ifndef FUNCIONES_H
#define FUNCIONES_H

struct dato
{
    char nombre[100];
    float peso;
    int codigo;
};

void ejercicio(struct dato * V, int nElementos, int criterio);
void ordenar(struct dato * V, int nElementos, int(*nombreFuncion)(struct dato a, struct dato b));
int nombreAlf(struct dato a, struct dato b);
int peso(struct dato a, struct dato b);
int codigo(struct dato a, struct dato b);

//COMPLETA AQUÍ CON EL PROTOTIPO DE LAS FUNCIONES QUE HAYAS NECESITADO


#endif