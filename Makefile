# Makefile: A standard Makefile for pythagoras.c
PREFIX = /usr/local
CFLAGS = -g -std=gnu99 -Wall -Wno-parentheses -I.
#LDFLAGS=
LDLIBS = -lm

all  : pythagoras
pythagoras: main.o pythagoras.o

install: pythagoras
	install -Dm755 $^ $(PREFIX)/bin/$^
uninstall: $(PREFIX)/bin/pythagoras
	rm -f $^

clean:
	/bin/rm -rf pythagoras pythagoras.o main.o

# END OF FILE
