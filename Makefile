main: main.o main_1.o main_2.o
	gcc main.o main_1.o main_2.o -o main

main.o: main.c main_header.h main_1_header.h main_2_header.h
	gcc -O0 -g3 -Wall -c main.c	

main_1.o: main_1.c main_1_header.h
	gcc -O0 -g3 -Wall -c main_1.c	

main_2.o: main_2.c main_2_header.h
	gcc -O0 -g3 -Wall -c main_2.c	

clean:
	rm -rf *.o main_app		