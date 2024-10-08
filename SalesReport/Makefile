all: statistics.o main.o scanReset.o
	gcc -o driver main.o statistics.o scanReset.o -Wall

main.o: main.c
	gcc -c main.c -Wall

statistics.o: statistics.c statistics.h
	gcc -c statistics.c statistics.h -Wall

scanReset.o: scanReset.c scanReset.h
	gcc -c scanReset.c scanReset.h -Wall

clean:
	rm -f *.o
	rm -f *.gch