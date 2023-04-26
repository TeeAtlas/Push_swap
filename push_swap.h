/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:01:16 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/26 18:01:28 by taboterm         ###   ########.fr       */
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

/* checks_a */
void	input_check(int argc, char **argv);
int		*valid_int(int argc, char **argv);
int		is_dup(char **argv);

/* operations_b */
void	swap_sa(t_list **stack_a);
void	swap_sb(t_list **stack_b);

#endif 