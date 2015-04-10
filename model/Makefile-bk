#
# Compiler
CC=gcc

# Flags
CFLAGS=-Wall -c

SOURCES=fileworker.c filter_data.c

OBJECTS=$(SOURCES:.c=.o)

model.o:$(OBJECTS) $(filter_out model.o, $(wildcard *.o))
	ld -r -o $@ $(OBJECTS)

.c.o:
	    $(CC) $(CFLAGS) $< -o $@
#model:
#	$(CC) $(CFLAGS) $(OBJECTS) -o model 

clean:
	rm -rf *.o

