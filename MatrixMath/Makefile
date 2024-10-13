all: matrixOperations.o main.o
	gcc -o driver main.o matrixOperations.o -Wall

main.o: main.c
	gcc -c main.c -Wall

matrixOperations.o: matrixOperations.c matrixOperations.h
	gcc -c matrixOperations.c matrixOperations.h -Wall

clean:
	rm -f *.o
	rm -f *.gch