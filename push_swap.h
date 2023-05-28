/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:01:16 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/28 16:41:46 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>

int		main(int argc, char **argv);

/* main */
// void	print_table(t_list *stack_a);
void	print_nodes(t_list **stack);

/* checks_a */
void	input_check(int argc, char **argv);
int		*valid_int(int argc, char **argv);
int		is_dup(char **argv);

/* operations */
void	push_pa(t_list **stack_a, t_list **stack_b);
void	push_pb(t_list **stack_a, t_list **stack_b);
void	swap_sa(t_list **stack_a);
void	swap_sb(t_list **stack_b);
void	swap_ss(t_list **stack_a, t_list **stack_b);
void	rotate_ra(t_list **stack_a);
void	rotate_rb(t_list **stack_b);
void	rotate_rr(t_list **stack_a, t_list **stack_b);
void	rotate_rra(t_list **stack_a);
void	rotate_rrb(t_list **stack_b);
void	rotate_rrr(t_list **stack_a, t_list **stack_b);

/* sort_small */
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
int		min_value(t_list **stack);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);

/* sort_big */
int max_value(t_list **stack);

// void	if_five(t_list **stack_a, t_list **stack_b);
// void	push_two_b(t_list **stack_a, t_list **stack_b);

/* indexing */
// t_list 	*sort_by_index(t_list **stack);
// int		min_value(t_list **stack);
// void	index_val_swap(t_list **stack);
void	update_index(t_list **stack);
void	reassign_index(t_list **stack, t_list **stack_cpy);

/* freeing */
void	free_stack(t_list **stack);

#endif