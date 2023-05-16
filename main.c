/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/16 19:14:58 by taboterm         ###   ########.fr       */
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
	i = 1;
	temp = stack_a;
	printf("-----------------------------\n");
	printf("Index | stack \n");
	printf("-----------------------------\n");
	while (i <= n && temp != NULL)
	{
		ft_printf("    %d   |  %d \n", i, temp->content);
		temp = temp->next;
		i++;
	}
	printf("-----------------------------\n\n");
}

int	stack_len(t_list *stack_a)
{
	int i;
	t_list *temp;

	i = 1;
	temp = stack_a;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return(i);
}

void	print_table_b(t_list *stack_a, t_list *stack_b)
{
	int n;
	int i;
	t_list *temp;
	t_list *temp_2;

	n = 20;
	i = 1;
	temp = stack_a;
	temp_2 = stack_b;
	printf("-----------------------------\n");
	printf("Index | stack_a | stack_b\n");
	printf("-----------------------------\n");
	while (i <= n && temp != NULL)
	{
		ft_printf("    %d   |  %d   | %d\n", i, temp->content, temp_2->content);
		temp = temp->next;
		temp_2 = temp_2->next;
		i++;
	}
	printf("-----------------------------\n\n");
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	t_list	*stack_a;
	t_list	*stack_a_copy;
	t_list	*stack_b;
	
	i = 1;
	j = 1;
	stack_a = NULL;
	stack_a_copy = NULL;
	stack_b = NULL;
	/* if three number easy two moves */
	input_check(argc, argv);
	while(argv[i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew_mod(ft_atoi_mod(argv[i])));
		i++;
	}
	while(argv[j])
	{
		ft_lstadd_back(&stack_a_copy, ft_lstnew_mod(ft_atoi_mod(argv[j])));
		j++;
	}
	print_table(stack_a);

	// swap_sa(&stack_a);
	// rotate_ra(&stack_a);
	// rotate_rra(&stack_a);
	// push_pb(&stack_a, &stack_b);
	// push_pa(&stack_a, &stack_b);
	if_three(&stack_a);
	// if_four(&stack_a, &stack_b);
	// if_five(&stack_a, &stack_b);
	ft_printf("-----------------------------\n");
	// ft_lstsize(stack_a);
	print_table(stack_a);
	// print_table_b(stack_a, stack_b);
	return (0);
}

/*
ft_atoi(argv[i])  ===>  int 10 
ft_lstnew(int 10)  ===>   node containing 10
ft_lstaddback(&stack_a, node containing 10)
*/



// void print_list(*stack_a)
// {
// 	ehile (*temp)
// }