/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:29:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/31 18:45:58 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_value(t_list **stack)
{
	t_list *current; // pointer to current node in stack
	int max; // max value found so far

	current = *stack;
	max = current->val; // max initialized with first stack value
	while (current != NULL)
	{
		if (current->val > max) // if current node is > max 
			max = current->val; // it becomes the max value
		current = current->next; // move to next node
	}
	return (max); // return max val
}

// determins the number of bit required to represent max_num (or any num) in binary
int	count_max_bits(int max_num, int max_bits)
{
	max_bits = 0;
	// if not eual to zero there are bits to be considered
	while ((max_num >> max_bits) != 0) // Right shift max_num until it becomes zero
		max_bits++; //increment max_bits to count bits
	return (max_bits); // Return the total number of bits
}

int	get_max_bits(t_list **stack)
{
	int	max_num; // Maximum number from stack
	int	max_bits;
	
	max_num = max_value(stack);
	max_bits = 0; // initialize to zero
	return (count_max_bits(max_num, max_bits)); // calculate the number of bits required
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	int		i_bits;
	int		i_num;
	int		max_bits;
	int		len;

	current = (*stack_a); // pointer to value of first node in stack a
	max_bits = get_max_bits(stack_a);
	len = ft_lstsize(current);
	i_bits = 0;
	while (i_bits < max_bits) // loop until all bits have been processed
	{
		i_num = 0; //initialize number of nodes processed to zero
		while (i_num++ < len) // loop through each node in the stack
		{
			current = (*stack_a);
			if (((current->index >> i_bits) & 1) == 1) // check bit at current position
				rotate_ra(stack_a); //rotate stack if bit is one
			else
				push_pb(stack_a, stack_b); // push to b if bit is 0
		}
		while (*stack_b != 0) // push all nodes from a to b
			push_pa(stack_a, stack_b);
		i_bits++; //move to next bit position
	}
}