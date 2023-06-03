/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 18:03:42 by taboterm         ###   ########.fr       */
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
			return 0;
		current = current->next;
	}
	return 1;
}

// void	print_result(t_list **stack_a, t_list **stack_b)
// {
// 	if (is_sorted(stack_a) && (*stack_b) == NULL && (*stack_a) != NULL)
// 		write(1, "OK\n", 3);
// 	else 
// 		write(1, "KO\n", 3);
// 	return ;
// }

int	small_sort(t_list **stack_a, t_list **stack_b, int argc)
{
	if (argc == 3)
	{
		sort_two(stack_a);
		free_stack(stack_a);
	}
	else if (argc == 4)
	{
		sort_three(stack_a);
		free_stack(stack_a);
	}
	else if (argc == 5)
	{
		sort_four(stack_a, stack_b);
		free_two(stack_a, stack_b);
	}
	else if (argc == 6)
	{
		sort_five(stack_a, stack_b);
		free_two(stack_a, stack_b);
	}
	return (0);
}

int main(int argc, char **argv) {   
    t_list *stack_a = NULL;
    t_list *stack_a_cpy = NULL;
    t_list *stack_b = NULL;

    input_check(argc, argv);
    linked_list(&stack_a, &stack_a_cpy, argv);
    value_sort(&stack_a_cpy, &stack_b, ft_lstsize(stack_a_cpy));
    update_index(&stack_a_cpy);
    if (argc > 2 && argc < 7) {
        small_sort(&stack_a, &stack_b, ft_lstsize(stack_a_cpy));
    } else {
        reassign_index(&stack_a, &stack_a_cpy);
        radix_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
        free_stack(&stack_a);
        free_stack(&stack_b);
        free_stack(&stack_a_cpy);
    }
    return 0;
}
