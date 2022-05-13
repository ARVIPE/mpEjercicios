#ifndef FUNCIONES_H
#define FUNCIONES_H

struct alumno{
    char nombre[200];
    int curso;
    float nota;
};

void addAlumno(char * nF, struct alumno a);
void mostrarFichero(char * nF);
int contarRegistros(char * nF);
void mediaNota(char * nF, float * media);
int modificarAlumno(char * nF, char * nombre, float nota);
int borrarAlumno(char * nF, char * nombre);
void binarioAtexto(char * nF1, char * nF2);


#endif