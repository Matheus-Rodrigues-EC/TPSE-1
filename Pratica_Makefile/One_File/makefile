#teste de makefile com um arquivo

all: app

app: main.o
	gcc -o app main.o

main.o: main.c
	gcc -c main.c

clean:
	rm *.o *.exe