#ifndef FUNCIONES_H
#define FUNCIONES_H

struct persona{
    char dni[0];
    int edad;
    float peso;
};

struct nodo{
    struct persona dato;
    struct nodo*sig;
};



#endif