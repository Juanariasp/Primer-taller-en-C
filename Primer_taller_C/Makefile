GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
MATHFLAG = -lm

PROGS = taller

all: $(PROGS)

taller:
	$(GCC) $(FLAGS) -c $@.c 
	$(GCC) $(FLAGS) -c funciones_taller.c
	$(GCC) $(FLAGS) -o $@ $@.o funciones_taller.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGS)
	
