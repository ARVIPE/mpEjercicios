#ifndef FUNCIONES_H
#define FUNCIONES_H

struct dato
{
    int codigo;
    float peso;
};

struct lista
{
    struct dato elemento;
    struct lista * siguiente;
};

int ejercicio(struct dato * VECTOR, int NUMELEMENTOS, struct lista ** LISTA, float limite);

//COMPLETA AQUÍ CON EL PROTOTIPO DE LAS FUNCIONES QUE HAYAS CREADO
void apilar(struct lista ** lista, struct dato elemento);
struct lista * nuevoElemento();
int contarElementos(struct lista * lista);
void vectorALista(struct dato * v,int tam,struct lista ** lista,float limite);

#endif