PREFIX = /usr/local
dbg = -g
#
# Compiler
CC=gcc
# Flags
CCFLAGS=#-Wall -Wextra 
LDFLAGS=-lGL
LINKERFLAG=-lm
# Program's output name
EXECUTABLE=ToDo

#source folder
srcdir=src

# Modules folders
interface_dir=interface
model_dir=model

# This folder files
SOURCES=$(wildcard $(srcdir)/*.c) \
       	$(wildcard $(srcdir)/resources/*.c)	
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

# Dependencies
DEPENDENCY=$(srcdir)/$(model_dir)/libmodel.so #$(srcdir)/$(interface_dir)/libinterface.la


# EXECUTABLE
all: $(EXECUTABLE)

.PHONY: $(EXECUTABLE)  
${EXECUTABLE}: $(DEPENDENCY) $(OBJECTS)
	$(CC) $(CCFLAGS) -o $@ $(OBJECTS) $(DEPENDENCY)
		

.PHONY: clean
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

.PHONY: cleandeep
cleandeep:
	rm -rf ${DEPENDENCY}
