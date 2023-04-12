/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:32:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/12 20:14:22 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
// # include <string.h>
# include <unistd.h>
// type va_list and three macros which can be used to get the arguments
# include <stdarg.h>
// # include <stdint.h>
// the above library contains macros for aliases of all type declarations

typedef struct s_list //type of data stuct
{
	// void			*content; // integer element 4 bits
	int				content; //we will only have ints inside no need for void pointer
	struct s_list	*next; // second building block - pointer to same element we are in
}	t_list;

int	ft_atoi(const char *str)
{
	signed long long int	res;
	int						sign;
	int						i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*temp;

	temp = *lst;
	if (!temp)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(temp);
	temp -> next = new;
}

t_list	*ft_lstnew_mod(int content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element)
	{
		new_element->content = content;
		new_element->next = NULL;
	}
	return (new_element);
}

int	main(int argc, char **argv)
{
	int i;
	t_list	*stack_a;
	t_list	*stack_b;


	i = 1;
	while(argv[i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew_mod(ft_atoi(argv[i])));
		i++;
	}
	printf("First Element: %d\n", stack_a->content);
	printf("Second Element: %d\n", stack_a->next->content);
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