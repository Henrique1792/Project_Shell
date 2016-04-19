CC = gcc
OBJECTS: utils.o main.o
CPP_FLAGS = -I -Wall -Werror -std=c89 
C_FLAGS: 


%.o: %.c
	$(CC) -c  $<

all:
	$(CC) $(CPP_FLAGS) $(OBJECTS) -o teste




run:
	./teste



.PHONY: clean
clean:
	rm -rf *.o
