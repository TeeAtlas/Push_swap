/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:41:37 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 16:55:57 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* take first element of stack_b and put into top of stack_a */
void	push_pa(t_list **stack_a, t_list **stack_b, int print)
{
	t_list	*temp;
	
	if (!(*stack_b))
		return ;
	temp = (*stack_b); // stores the value of the first element of stack b
	(*stack_b) = temp->next; // first element now the second element of stack_b
	ft_lstadd_front(stack_a, temp); // add temp to front of stack_b
	if (print)
		write(1, "pa\n", 3);
}

/* take first element of stack_a and put into top of stack_b */
void	push_pb(t_list	**stack_a, t_list **stack_b, int print)
{
	t_list	*temp;

	if(*stack_a == NULL)
		return ;
	temp = (*stack_a); // stores the value of the first element of stack_a
	(*stack_a) = (*stack_a)->next; 
	ft_lstadd_front(stack_b, temp);
	if (print)
		write(1, "pb\n", 3);
}
