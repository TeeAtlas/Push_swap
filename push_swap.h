/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:01:16 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/24 15:09:05 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// typedef struct s_stack
// {
// 	long int		content; //using int because we will on have ints inside no need for void pointer
// 	struct s_stack	*next; //second building block - pointer to the same element we are in
// } t_stack;

int		main(int argc, char **argv);

/* printing lists*/
void	print_table(t_list *stack_a);

/* parsing and checks */
void	input_check(int argc, char **argv);
int		*valid_int(int argc, char **argv);
int		is_dup(char **argv);
void	swap_sa(t_list **stack_a, int print);

/* sorting */
void	if_one_two(int argc, char **argv);

#endif 