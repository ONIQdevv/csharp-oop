# variables
CC=gcc
CFLAGS=-std=c11 -Wall -Werror
LDLIBS=-lm
OUTPUT=labs

# targets
all: $(OUTPUT)

$(OUTPUT): lab5.o lab4.o lab3.o
	cppcheck --enable=performance,unusedFunction --error-exitcode=1 *.c
	$(CC) $(CFLAGS) lab5.o lab4.o lab3.0 $(LDLIBS) -o $(OUTPUT)

lab3.o: lab3.c
	$(CC) $(CFLAGS) -c lab3.c $(LDLIBS) -o lab3.o

lab4.o: lab4.c
	$(CC) $(CFLAGS) -c lab4.c $(LDLIBS) -o lab4.o

lab5.o: lab5.c
	$(CC) $(CFLAGS) -c lab5.c $(LDLIBS) -o lab5.o

# remove compiled files
clean: 
	rm -rf $(OUTPUT) *.o


