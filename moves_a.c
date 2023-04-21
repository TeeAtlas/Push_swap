/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/21 18:43:09 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sorting stack only if number on the top is higher than the bottom */
/* and swap so as to arrange in ascending order */

void	swap_sa(t_stack **stack_a, int print)
{
	t_stack	*a;
	int *temp; //temp pointer to fist element

	temp = (*stack_a)->next;
	(*stack_a)->next = temp->next;
	temp->next = (*stack_a)->next->next;
	(*stack_a)->next->next = temp;
	if (print != 0)
		write(1, "sa\n", 3);
}

void	swap_sb()
{
	
}