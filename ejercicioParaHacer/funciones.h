#ifndef FUNCIONES_H
#define FUNCIONES_H

struct producto{
    int codigo;
    char nombre[1000];
    int unidades;
};

struct producto * reservaMemoria(int tam);
void rellenarVector(struct producto * v, int tam);
void mostrarVector(struct producto * v, int tam);
char * menorUnidades(struct producto * v, int tam);
char *  mayorUnidades(struct producto * v, int tam);
void ordenarVector(struct producto * v, int tam);

#endif

