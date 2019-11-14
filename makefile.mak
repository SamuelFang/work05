all: stats.o
	gcc -o program stats.o
stats.o: stats.c
	gcc -c stats.c
run:
	./program