PROJECT = prog
SOURCE = prog.c
HEADERS =

CFLAGS = -Wall 
LDFLAGS = -lm
OBJECTS = ${SOURCE:.c=.o}


$(PROJECT): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROJECT) $(LDFLAGS)

$(OBJECTS): $(HEADERS)
clean:
	-rm -f $(PROJECT) $(OBJECTS) *.core
