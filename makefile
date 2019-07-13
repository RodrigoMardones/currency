output:main.o
	gcc main.o -o salida.out

main.o: main.c
	gcc -c main.c