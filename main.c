/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/18 20:41:15 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* all checks throw 1 flag if ok and 0 if not */
/* start at argc[1], because argc[0] is executable */
int	main(int argc, char **argv)
{
	int i;
	t_list	*stack_a;
	
	i = 1;
	/* start parsing with checks*/
	/* int check - no characters */
	/* max min int check */
	/* dup check */
	input_check(argc, argv);
	
	/* adding nodes with while loop for each number */
	while(argv[i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew_mod(ft_atoi_mod(argv[i])));
		i++;
	}
	printf("First Element: %ld\n", stack_a->content);
	printf("Second Element: %ld\n", stack_a->next->content);
	printf("Third Element: %ld\n", stack_a->next->next->content);
	return (0);
}

/*
ft_atoi(argv[i])  ===>  int 10 
ft_lstnew(int 10)  ===>   node containing 10
ft_lstaddback(&stack_a, node containing 10)
*/