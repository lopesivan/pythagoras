# Makefile: A standard Makefile for pythagoras.c
CFLAGS=-g -std=gnu99 -Wall -Wno-parentheses -I.
#LDFLAGS=
LDLIBS=-lm

all  : pythagoras
pythagoras: main.o pythagoras.o
clean:
	/bin/rm -rf pythagoras pythagoras.o
# END OF FILE
