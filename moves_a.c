/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/24 11:45:56 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* sorting stack only if number on the top is higher than the bottom 
and swap so as to arrange in ascending order 
same operation as ft_swap from exam basic operation requires two ints
and follows a pretty easy pattern of temp - a - a - b - b - temp 
full circle*/

void	swap_sa(t_stack **stack_a)
{	
	printf("swap_print\n");
	t_stack *temp;
	
	temp = *stack_a;
	if(!temp || temp->next)
		return ;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = temp;
}

// void	swap_sb()
// {
	
// }