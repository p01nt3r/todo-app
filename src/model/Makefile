
# Compiler
CC=gcc
# Flags
CCFLAGS=-Wall -Wextra 
LDFLAGS=-lGL

# This folder files
SOURCES=$(wildcard *.c) 
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))


.PHONY: libmodel
libmodel: 
	$(CC) $(CCFLAGS) -shared -fpic $(LDFLAGS) -c  $< $(SOURCES) 
	$(CC) -shared $(OBJECTS) -o $@.so

.PHONY: clean
clean:
	rm -f *.o *.so
