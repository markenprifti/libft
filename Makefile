NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = .
ADD_DIR = additional_functions
LST_DIR = linked_list

SRC =	$(filter-out main.c, \	
		$(wildcard $(SRC_DIR)/*.c) \
		$(wildcard $(ADD_DIR)/*.c) \
		$(wildcard $(LST_DIR)/*.c))


OBJ = $(SRC:.c=.o) 

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: re

.PHONY: all clean fclean re debug
