CC = gcc
CPP_FLAGS = -I. -Wall -std=c89
OBJS = utils.o parser.o main.o

%.o: %.c
	$(CC) -c $<

all: $(OBJS)
	$(CC) $(CPP_FLAGS) $^ -o teste

run:
	@./teste

.PHONY: clean

clean:
	@rm -rf *.o
