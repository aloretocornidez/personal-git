# This is a basic makefile to compile a program.

CC=g++
# CFLAGS=-Wall -Wfatal-errors -Werror
CFLAGS=-Wall -Wfatal-errors

SRC=main.cpp\
		LinkedList.cpp\
		LinkedList.hpp\
		test.cpp\
		test.hpp

PROGRAM=program

.PHONY: all
all: ${PROGRAM}

program: ${SRC}
	${CC} ${CFLAGS} -o ${PROGRAM}  ${SRC}

.PHONY: clean
clean:
	rm -rf *.o ${PROGRAM} 
