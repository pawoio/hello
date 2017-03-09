all: bis
	
bis: bisekcja.o
	gcc -o a bisekcja.o

bisekcja.o: bisekcja.c
	gcc bisekcja.c
clean:
	rm-rf *o build