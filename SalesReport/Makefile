all: statistics.o main.o
	gcc -o driver main.o statistics.o -Wall

main.o: main.c
	gcc -c main.c -Wall

statistics.o: statistics.c statistics.h
	gcc -c statistics.c statistics.h -Wall

clean:
	rm -f *.o
	rm -f *.gch