PROJECT = deseti
SOURCE = deseti.c
HEADERS =

CFLAGS = -Wall 
LDFLAGS = 
OBJECTS = ${SOURCE:.c=.o}


$(PROJECT): $(OBJECTS)
	$(CC) $(OBJECTS) -lm -o $(PROJECT)

$(OBJECTS): $(HEADERS)
clean:
	-rm -f $(PROJECT) $(OBJECTS) *.core
