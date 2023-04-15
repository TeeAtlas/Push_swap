/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/15 11:39:54 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* start at argc[1], becuase argc[0] is executable 
*/
int	main(int argc, char **argv)
{
	int i;
	t_stack	*stack_a;
	(void)argc;
	
	i = 1;
	while(argv[i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew_mod(ft_atoi(argv[i])));
		i++;
	}
	printf("First Element: %d\n", stack_a->content);
	printf("Second Element: %d\n", stack_a->next->content);
	printf("Third Element: %d\n", stack_a->next->next->content);
	return (0);
}


// int	main(int argc, char **argv)
// {
// 	Node root;
// 	root.x = 15;
// 	root.next = malloc(sizeof(Node));
// 	root.next->x = -2;
	
// 	printf("First Element: %d\n", root.x);
// 	printf("Second Element: %d\n", root.next->x);

// 	free(root.next);
// 	return 0;
// }



/*
ft_atoi(argv[i])  ===>  int 10 
ft_lstnew(int 10)  ===>   node containing 10
ft_lstaddback(&stack_a, node containing 10)
*/