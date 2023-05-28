# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 11:39:37 by taboterm          #+#    #+#              #
#    Updated: 2023/05/28 16:06:10 by taboterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target output
NAME = push_swap
# Compiling info
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
DEBUG = -fsanitize=address
LEAKS = leaks -atExit -- ./push_swap

# Libraries
LIBFT_A = libft/libft.a


# Paths
SRC_PATH = src/
OBJ_PATH = obj/
LIBFT = libft

# Source and object files
SRCS = push_swap.c checks.c operations_s.c operations_r.c operations_p.c\
		sort_small.c indexing.c\

OBJS = $(SRCS:%.c=%.o)

# Make desired targets = Rules
all: $(OBJ_PATH) $(NAME)

# $@ says to put the output of the compilation 
# in the file named on the left side of the :
# !! STILL NOT SURE WHAT $^ MEANS
$(OBJ_PATH):
	mkdir $(OBJ_PATH)

# Make target executable & Debug
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(CC)  $(CFLAGS) $(OBJS) $(LIBFT_A) -o $(NAME)
	mv $(OBJS) $(OBJ_PATH)

clean:
	rm -rf $(OBJ_PATH)
	$(MAKE) clean -C $(LIBFT)

fclean: clean
	rm -rf $(NAME)
	$(MAKE) clean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
