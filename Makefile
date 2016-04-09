CC=gcc
CSTD=c99
CFLAGS=-Wall -pedantic -ggdb
CINCLUDE=-Ilib/
CLIB=-lm -lSDL2 -lSDL2_gfx -lSDL2_image

all:
	${CC} -std=${CSTD} ${CINCLUDE} ${CFLAGS} src/editor.c ${CLIB} -oeditor

