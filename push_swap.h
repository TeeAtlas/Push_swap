/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:01:16 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 20:59:10 by taboterm         ###   ########.fr       */
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


/* main */
void	print_nodes(t_list **stack);
int		is_sorted(t_list **stack);
void	print_result(t_list **stack_a, t_list **stack_b);
int		main(int argc, char **argv);
int		all_sort(t_list **stack_a, t_list **stack_b, int argc);

void	linked_list(t_list **stack_a, t_list **stack_a_cpy, char **argv);


/* checks_a */
void	input_check(int argc, char **argv);
int		*valid_int(int argc, char **argv);
int		is_dup(char **argv);

/* operations */
void	push_pa(t_list **stack_a, t_list **stack_b, int print);
void	push_pb(t_list **stack_a, t_list **stack_b, int print);
void	swap_sa(t_list **stack_a, int print);
void	swap_sb(t_list **stack_b, int print);
void	swap_ss(t_list **stack_a, t_list **stack_b, int print);
void	rotate_ra(t_list **stack_a, int print);
void	rotate_rb(t_list **stack_b, int print);
void	rotate_rr(t_list **stack_a, t_list **stack_b,int print);
void	rotate_rra(t_list **stack_a, int print);
void	rotate_rrb(t_list **stack_b,int print);
void	rotate_rrr(t_list **stack_a, t_list **stack_b, int print);

/* sort_small */
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
int		min_value(t_list **stack);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);

/* sort_big */
void	value_sort(t_list **stack_a, t_list **stack_b, size_t lst_size);
void	radix_sort(t_list **stack_a, t_list **stack_b, size_t lst_size);

/* indexing */
void	update_index(t_list **stack);
void	reassign_index(t_list **stack, t_list **stack_cpy);

/* freeing */
void	freeing_stack(t_list **stack);
void	free_all(t_list **stack_a, t_list **stack_b, t_list **stack_a_cpy);

#endif