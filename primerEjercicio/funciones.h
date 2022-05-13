//Guardas de inclusion
//Definicion de la estructura
//Prototipo de difusiones 
#ifndef FUNCIONES_H
#define FUNCIONES_H

struct alumno{
    char nombre[1024];
    long dni;
    float nota;
};

struct alumno pedirDatos();
struct alumno * reservaMemoria(int tam);
void liberaMemoria(struct alumno ** v);
void rellenarVector(struct alumno * v, int tam);
void mostrarVector(struct alumno *v, int tam);
int buscarAlumno(struct alumno * v, int tam, long dni);
int buscarAlumnoNombre(struct alumno * v, int tam, char * nombre);
void mediaNota(struct alumno * v, int tam, float * media);


#endif