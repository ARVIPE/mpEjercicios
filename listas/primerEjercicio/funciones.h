#ifndef FUNCIONES_H
#define FUNCIONES_H

struct nodo{
    int dato;
    struct nodo*sig;
};

void insertarDelante(struct nodo**cabeza, int dato);
void lista_a_vector(struct nodo * cabeza, int * v);
void vector_a_lista(struct nodo ** cabeza, int * v, int tam);
void mostrarLista(struct nodo * cabeza);
void insertarDetras(struct nodo**cabeza, int dato);
int buscarElemento(struct nodo** cabeza, int dato);
int contarElementos(struct nodo** cabeza);
int calcularMedia(struct nodo** cabeza);
void borrarElemento(struct nodo ** cabeza, int dato);
void vector(int dato, int tam);
void volcarVector(struct nodo * cabeza, int tam);


#endif