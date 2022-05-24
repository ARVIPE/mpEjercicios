#ifndef FUNCIONES_H
#define FUNCIONES_H

struct proceso{
    char nombre[15];
    int duracion;
    int prioridad;
};

void mostrarFicheros(char * fichero);
void ficheroConMayorPrioridad(char * fichero, char * mayorPriod, int X);
void ficherosConMenorPrioridad(char * fichero, char * menorPriod, int X);

#endif