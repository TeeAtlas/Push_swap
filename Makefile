#target output
NAME = push_swap

#source id
SRC = main.c

OBJS = $(SRCS:%.c=%.o)

#compiling info
CC = gcc
CFLAGS = -Wall -Wextra - Werror -g

RM = rm -fclean

#including libft
LIBFT = libft/libft.a

#make target executable
$(NAME): $(OBJS)

#make desired targets
all:	${NAME}

clean:
	make clean -C ./libft

fclean: clean
	make clean -C ./libft
	/bin/rm -f *.o $(NAME)

re: fclean all

.PHONY: clean fclean all re
