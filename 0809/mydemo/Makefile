
CC = gcc

MYPWD = `pwd`
MYDATE = `date`
MYPRJ = $(notdir $(MYPWD))

SRC = $(wildcard *.c)
HEAD = $(wildcrd *.h)
OBJ = $(SRC:.c=.o)


all: $(MYPRJ)	
	@echo OK, finished!

$(MYPRJ): $(OBJ)
	$(CC) $^ -o $@

test:
	@echo current dir is $(MYPWD)
	@echo current dir is $(MYDATE)
	@echo project is $(MYPRJ)
	@echo source.c is $(SRC)
	@echo HEAD is $(HEAD)
	@echo obj .o is $(OBJ)
