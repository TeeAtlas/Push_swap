/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:47:38 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/31 22:53:56 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b, size_t lst_size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (!(is_sorted(*stack_a)))
	{
		while (i < lst_size)
		{
			if((((*stack_a)->index >> j) & 1) == 0)
				push_pb(stack_a, stack_b);
			else
				rotate_ra(stack_a, true);
			i++;
		}
		while (*stack_b != NULL)
			push_pa(stack_a, stack_b);
		i = 0;
		j++;
	}
}