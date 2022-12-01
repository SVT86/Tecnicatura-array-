CC = g++

arregloOne.exe:	arregloOne.o
				${CC} arregloOne.o -o arregloOne.exe
arregloOne.o	: arregloOne.c
				${CC} -c arregloOne.c -o arregloOne.o

clean:
				rm *.o *.exe