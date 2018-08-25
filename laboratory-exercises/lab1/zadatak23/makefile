PROJECT = prog
SOURCE = prog.c
HEADERS =

CFLAGS = -Wall 
LDFLAGS = 
OBJECTS = ${SOURCE:.c=.o}


$(PROJECT): $(OBJECTS)
	$(CC) $(OBJECTS) -o  $(PROJECT) -lm 

$(OBJECTS): $(HEADERS)
clean:
	-rm -f $(PROJECT) $(OBJECTS) *.core
