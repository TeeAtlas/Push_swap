/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/31 21:53:15 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// to print nodes in linked list
void	print_nodes(t_list **stack)
{
	t_list	*current;
	
	current = (*stack); // declare current as pointer to stack
	while(current != NULL) // as long as the stack is not empty
	{
		ft_printf("Value: %d, Index %d\n", current->val, current->index);
		current = current->next; // set current to next node until null
	}
}

bool	is_sorted(t_list **stack)
{
	t_list	*current;
	
	current = (*stack); // creating pointer to travers the list
	while (current->next != NULL)
	{
		if (current->val > current->next->val)
			return false;
		current = current->next;
	}
	return true;
}

void	print_result(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a) && (*stack_b) == NULL && (*stack_a) != NULL)
		write(1, "OK\n", 3);
	else 
		write(1, "KO\n", 3);
	return ;
}

int	hard_sort(t_list **stack_a, t_list **stack_b, int argc)
{
	if (argc == 3)
	{
		sort_two(stack_a);
	}
	else if (argc == 4)
	{
		sort_three(stack_a);
	}
	else if (argc == 5)
	{
		sort_four(stack_a, stack_b);
	}
	else if (argc == 6)
	{
		sort_five(stack_a, stack_b);
	}
	return (0);
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
	print_nodes(&stack_a_cpy);
	ft_lstsize(stack_a);
	hard_sort(&stack_a_cpy, &stack_b, argc);
	update_index(&stack_a_cpy);
	print_result(&stack_a_cpy, &stack_b);
	reassign_index(&stack_a, &stack_a_cpy);
	ft_printf("-----------------------------\n");
	print_nodes(&stack_a_cpy);
	ft_printf("-----------------------------\n");
	ft_printf("orginal stack reassigned indexes\n");
	ft_printf("-----------------------------\n");
	print_nodes(&stack_a);
	free_all(&stack_a, &stack_b, &stack_a_cpy);
	return (0);
}

/*
ft_atoi(argv[i])  ===>  int 10 
ft_lstnew(int 10)  ===>   node containing 10
ft_lstaddback(&stack_a, node containing 10)
*/
