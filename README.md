# Pythagorean Theorem

The Pythagorean Theorem, also known as Pythagoras' theorem,
is a fundamental relation between the three sides of a right
triangle. Given a right triangle, which is a triangle in which
one of the angles is 90°, the Pythagorean theorem states that
the area of the square formed by the longest side of the right
triangle (the hypotenuse) is equal to the sum of the area of the
squares formed by the other two sides of the right triangle.

## Create Makefile

```
 $ echo *.c| sed.g_mk-m
# Makefile: A standard Makefile for main.c pythagoras.c

CFLAGS=-g -std=gnu99 -Wall -Wno-parentheses
#LDFLAGS=
LDLIBS=-lm

all  : main
clean:
        /bin/rm -rf main main.o pythagoras.o
# END OF FILE
```
