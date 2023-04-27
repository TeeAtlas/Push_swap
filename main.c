/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/27 17:43:32 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* all checks throw 1 flag if ok and 0 if not */
/* start at argc[1], because argc[0] is executable */

void	print_table(t_list *stack_a)
{
	int n;
	int i;
	t_list *temp;

	n = 20;
	temp = stack_a;
	i = 1;
	printf("-----------------------------\n");
	printf("Index | Value | n\n");
	printf("-----------------------------\n");
	while (i <= n && temp != NULL)
	{
		ft_printf("    %d   |  %d   | tbd values\n", i, temp->content);
		temp = temp->next;
		i++;
	}
	printf("-----------------------------\n\n");
}

// void	operations(t_list **stack)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;

// 	swap_sa(&stack_a);
// 	swap_sb(&stack_b);
// 	rotate_ra(&stack_a);
// 	rotate_rb(&stack_b);
// 	rotate_rra(&stack_a);
// 	rotate_rrb(&stack_b);
// }


int	main(int argc, char **argv)
{
	int i;
	t_list	*stack_a;
	
	i = 1;
	/* create rotate and swap functon */
	/* if three number easy two moves */
	/* if more that's when we need to start creating functions to sort numbers and stack_b */
	input_check(argc, argv);
	
	/* adding nodes with while loop for each number */
	while(argv[i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew_mod(ft_atoi_mod(argv[i])));
		i++;
	}
	// swap_sa(&stack_a);
	// rotate_ra(&stack_a);
	rotate_rra(&stack_a);
	ft_printf("-----------------------------\n");
	ft_lstsize(stack_a);
	print_table(stack_a);
	return (0);
}

/*
ft_atoi(argv[i])  ===>  int 10 
ft_lstnew(int 10)  ===>   node containing 10
ft_lstaddback(&stack_a, node containing 10)
*/