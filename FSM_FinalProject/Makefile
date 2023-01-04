all : mylib.o
	gcc -o main.exe main.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

run:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.exe main.c mylib.o
	./main.exe
	
clear:
	rm -rf.exe
	rf -rf.o