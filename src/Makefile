#
# Compiler
CC=gcc
# Flags
CFLAGS=-Wall `pkg-config --libs --cflags gtk+-2.0`

# Program's output name
EXECUTABLE=ToDo

# Modules folders
interface_dir=interface
model_dir=model

# This folder files
SOURCES=mainwindow.c
OBJECTS=$(SOURCES:.c=.o)

# Dependencies
DEPENDENCY=$(model_dir)/model.o $(interface_dir)/interface.o


# EXECUTABLE
${EXECUTABLE}: $(DEPENDENCY) $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(DEPENDENCY) 
		

$(DEPENDENCY):
	cd $(interface_dir); make
	cd $(model_dir); make


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) ${EXECUTABLE} *~
	cd ${interface_dir}; make clean;
	cd ${model_dir}; make clean
