/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:47:38 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/02 18:54:47 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b, size_t lst_size)
{
	size_t	i;
	size_t	j;
	int		temp;
	// bool	moved;

	j = 0;
	temp = 0;
	while (!(is_sorted(stack_a)))
	{
		i = 0;
		// moved = false;
		while (i < lst_size)
		{	
			temp = (*stack_a)->val; // before because it has to grab the index of current node and not change
			// printf("31-temp: %i\n", temp);
			// printf("32 NUM: %lu\n", (*stack_a)->val);
			if(((temp >> j) & 1) == 0) // push with zero to b
			{
				push_pb(stack_a, stack_b);
				// moved = true;
			}
			else
			{
				// j = 0;
				rotate_ra(stack_a);
			}
			i++;
		}
		// if (!moved)
		while (*stack_b != NULL)
		{
			push_pa(stack_a, stack_b);
		}
		j++;
	}
}