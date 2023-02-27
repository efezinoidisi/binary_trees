# args - command line arguments
CC = gcc
SRC = main.c binary_tree_print.c
CFLAGS = -Wall -Wextra -Werror -pedantic
RM = rm -f
NAME = main

all: $(SRC) binary_trees.h
	$(CC) $(CFLAGS) $(SRC) $(args) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

re: clean all
