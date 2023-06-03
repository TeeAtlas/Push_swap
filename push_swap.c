/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 21:32:58 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack)
{
	t_list	*current;
	
	current = (*stack); // creating pointer to travers the list does not change original head
	while (current->next != NULL)
	{
		if (current->val > current->next->val)
			return false;
		current = current->next;
	}
	return true;
}

int	main(int argc, char **argv)
{	
	t_list	*stack_a;
	t_list	*stack_a_cpy;
	t_list	*stack_b;
	
	stack_a = NULL;
	stack_a_cpy = NULL;
	stack_b = NULL;
	input_check(argc, argv);
	linked_list(&stack_a, &stack_a_cpy, argv);
	value_sort(&stack_a_cpy, &stack_b, ft_lstsize(stack_a_cpy));
	update_index(&stack_a_cpy);
	reassign_index(&stack_a, &stack_a_cpy);
	if (argc == 3)
		sort_two(&stack_a);
	else if (argc == 4)
		sort_three(&stack_a);
	else if (argc == 5)
		sort_four(&stack_a, &stack_b);
	else if (argc == 6)
		sort_five(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
	free_all(&stack_a, &stack_b, &stack_a_cpy);
	return (0);
}
