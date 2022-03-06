main: main.o main_1.o main_2.o
	gcc main.o main_1.o main_2.o -o main

main.o: main.c main_header.h main_1_header.h main_2_header.h
	gcc -O0 -g3 -Wall -c main.c	

main_1.o: main_1.c main_1_header.h
	gcc -O0 -g3 -Wall -c main_1.c	

main_2.o: main_2.c main_2_header.h
	gcc -O0 -g3 -Wall -c main_2.c	

another_app: another_app.o	
	gcc another_app.o -o another_app

another_app.o: another_app.c
	gcc -O0 -g3 -Wall another_app.c -c

all: main another_app

run: main another_app
	./main && ./another_app

clean:
	rm -rf *.o main	another_app