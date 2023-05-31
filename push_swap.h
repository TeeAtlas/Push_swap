/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:01:16 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/31 19:04:32 by taboterm         ###   ########.fr       */
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
bool	is_sorted(t_list **stack);
void	print_result(t_list **stack_a, t_list **stack_b);
int		main(int argc, char **argv);
int		hard_sort(t_list **stack_a, t_list **stack_b, int argc);

void	linked_list(t_list **stack_a, t_list **stack_a_cpy, char **argv);


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
int 	max_value(t_list **stack);
int		count_max_bits(int max_number, int max_bits);
int		get_max_bits(t_list **stack);
void	radix_sort(t_list **stack_a, t_list **stack_b);

/* indexing */
void	update_index(t_list **stack);
void	reassign_index(t_list **stack, t_list **stack_cpy);

/* freeing */
void	freeing_stack(t_list **stack);
void	free_two(t_list **stack_a, t_list **stack_b);
void	free_all(t_list **stack_a, t_list **stack_b, t_list **stack_a_cpy);

#endif