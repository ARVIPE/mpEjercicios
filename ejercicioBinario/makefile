#Esta regla compila el programa principal.
programa: main.o funciones.o
	gcc -o programa main.o funciones.o
	
main.o: main.c funciones.h
	gcc -c main.c
	
funciones.o: funciones.c funciones.h
	gcc -c funciones.c
	
clean:
	rm -f programa *.o


