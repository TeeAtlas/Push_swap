/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:47:38 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 17:35:50 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	value_sort(t_list **stack_a, t_list **stack_b, size_t lst_size)
{
	size_t	i;
	size_t	j;
	int		temp;

	i = 0;
	temp = 0;
	while (!(is_sorted(stack_a)))
	{
		j = 0;
		while (j < lst_size)
		{	
			temp = (*stack_a)->val; // before because it has to grab the index of current node and not change
			// printf("31-temp: %i\n", temp);
			// printf("32 NUM: %lu\n", (*stack_a)->val);
			if(((temp >> i) & 1) == 0) // push with zero to b
				push_pb(stack_a, stack_b, 0);
			else
				rotate_ra(stack_a, 0);
			j++;
		}
		while (*stack_b != NULL)
			push_pa(stack_a, stack_b, 0);
		i++;
		j = 0;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b, size_t lst_size)
{
	size_t	i;
	size_t	j;
	int		temp;

	i = 0;
	temp = 0;
	while (!(is_sorted(stack_a)))
	{
		j = 0;
		while (j < lst_size)
		{	
			temp = (*stack_a)->index; // before because it has to grab the index of current node and not change
			// printf("31-temp: %i\n", temp);
			// printf("32 NUM: %lu\n", (*stack_a)->val);
			if(((temp >> i) & 1) == 0) // push with zero to b
				push_pb(stack_a, stack_b, 1);
			else
				rotate_ra(stack_a, 1);
			j++;
		}
		while (*stack_b != NULL)
			push_pa(stack_a, stack_b, 1);
		i++;
		j = 0;
	}
}

