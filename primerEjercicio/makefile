all: saludo programa clean

saludo:
	@echo Ejecutando el makefile de Arturo Vicente Pérez

programa: main.o funciones.o
	gcc -o ejercicio main.o funciones.o

main.o: main.c
	gcc -c main.c

funciones.o: funciones.c funciones.h
	gcc -c funciones.c

clean:
	rm -r *.o

