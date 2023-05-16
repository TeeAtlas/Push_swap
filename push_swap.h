/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:01:16 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/16 19:14:43 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		main(int argc, char **argv);

/* printing lists */
void	print_table(t_list *stack_a);
void	print_table_b(t_list *stack_a, t_list *stack_b);
int		stack_len(t_list *stack_a);

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

/* sort */
void	if_two(t_list **stack_a);
void	if_three(t_list **stack_a);
void	if_four(t_list **stack_a, t_list **stack_b);
// void	if_five(t_list **stack_a, t_list **stack_b);
void	push_two_b(t_list **stack_a, t_list **stack_b);

/* utilities */

#endif