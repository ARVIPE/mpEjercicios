#ifndef FUNCIONES_H
#define FUNCIONES_H

struct alumnos{
    char nombreApellido[1000];
    long dni;
};

int contarAlumnos(struct alumnos * v);
struct alumnos * reservarMemoria();



#endif

