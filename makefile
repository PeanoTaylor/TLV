test:test.o pathStack.o
	gcc test.o pathStack.o -o test -lpthread
test.o:test.c
	gcc -c test.c -o test.o -g -Wall
pathStack.o:pathStack.c
	gcc -c pathStack.c -o pathStack.o -g -Wall
