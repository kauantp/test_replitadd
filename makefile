# Makefile for a simple C program
# The target `all` depends on the target `main`.
all: main
# The target `main` depends on the file `main.c`.
main: main.c
		gcc -o main main.c
# Add the source file to the project
SRC += tarefas.h
SRC += tarefas.c
# The target `clean` removes the executable file `main`.
clean:
		rm -f main
	