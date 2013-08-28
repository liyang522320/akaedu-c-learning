#CC = mips-gcc
#CC = arm-linux-gcc
CC=gcc
TEST:=$(CC)
CC=cc

all:main 
	echo ok, finished!
	echo $(TEST)

main: sub_add.o add.o sub.o
	$(CC) -g $^ -o $@
#	$(CC) sub_add.o add.o sub.o -o main

%.o: %.c
	$(CC) -g -c $^ -o $@
#sub_add.o: sub_add.c
#	$(CC) -c sub_add.c

#add.o: add.c
#	$(CC) -c add.c

#sub.o: sub.c
#	$(CC) -c sub.c

.PHONY: clean
c clean:
	-rm ./a.out
	-rm *.o
#	-rm main
	-rm sub_add.o
	-rm add.o
	-rm sub.o
	@echo clean ok

