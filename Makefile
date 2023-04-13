#target output
NAME = push_swap

#source id
SRCS = push_swap.c\

OBJS = $(SRCS:%.c=%.o)

#compiling info
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

RM = rm -f

#including libft
LIBFT = libft/libft.a

#make desired targets
all:	$(NAME)

# $@ says to put the output of the compilation 
# in the file named on the left side of the :
# !! STILL NOT SURE WHAT $^ MEANS
$(%.o): $(%.c)
	$(CC) $(CFLAGS) -o $@ -c $^

#make target executable
$(NAME): $(OBJS)
	make -C ./libft
	echo $(LIBFT)
	$(CC)  $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT)

clean:
	make clean -C ./libft

fclean: clean
	make clean -C ./libft
	/bin/rm -f *.o $(NAME)

re: fclean all

.PHONY: clean fclean all re
