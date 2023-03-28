# prática de makefile com vários arquivos

all: app

app: main.o sum.o sub.o div.o mult.o
	gcc -o app ./obj/main.o ./obj/sum.o ./obj/sub.o ./obj/div.o ./obj/mult.o

main.o: main.c ./lib/sum.h ./lib/sub.h ./lib/div.h ./lib/mult.h
	gcc -o ./obj/main.o main.c -c

sum.o: sum.c ./lib/sum.h
	gcc -o ./obj/sum.o sum.c -c

sub.o: sub.c ./lib/sub.h
	gcc -o ./obj/sub.o sub.c -c

div.o: div.c ./lib/div.h
	gcc -o ./obj/div.o div.c -c

mult.o: mult.c ./lib/mult.h
	gcc -o ./obj/mult.o mult.c -c

clean:
	del app.exe