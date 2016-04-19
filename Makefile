#CC = gcc
#CPP_FLAGS = -I -Wall c=89
#C_FLAGS: -c
#%.o: %.c
	#$(CC) $(C_FLAGS) $@

#all:


run:
	./teste



.PHONY: clean
clean:
	rm -rf *.o
