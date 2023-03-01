# args - command line arguments
CC = gcc
SRC = main.c binary_tree_print.c
CFLAGS = -Wall -Wextra -Werror -pedantic
OPT = 0-binary_tree_node.c 2-binary_tree_insert_right.c
RM = rm -f
NAME = main

all: $(SRC) binary_trees.h
	$(CC) $(CFLAGS) $(SRC) $(args) -o $(NAME)

tar: $(SRC) binary_trees.h $(OPT)
	$(CC) $(CFLAGS) $(SRC) $(OPT)  $(args) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

re: clean all
