PROJECT = peti
SOURCE = peti.c
HEADERS =

CFLAGS = -Wall 
LDFLAGS =
OBJECTS = ${SOURCE:.c=.o}

$(PROJECT): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROJECT)

$(OBJECTS): $(HEADERS)
clean:
	-rm -f $(PROJECT) $(OBJECTS) *.core
