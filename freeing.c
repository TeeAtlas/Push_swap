/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:15:25 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 18:00:31 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* frees the stack */
void	free_stack(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *stack;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		if (tmp1)
		{
			free(tmp1);
			tmp1 = tmp2;
		}
	}
}

void	free_two(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
}

void	free_all(t_list **stack_a, t_list **stack_b, t_list **stack_a_cpy)
{
	free_stack(stack_a);
	free_stack(stack_a_cpy);
	free_stack(stack_b);
}