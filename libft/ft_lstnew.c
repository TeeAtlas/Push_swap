/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:17:45 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/13 15:59:33 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allocates with malloc and returns new node.
the member variable "content" is initialized with the 
value of the parameter "content". The variable "next"
is initialized to NULL.
Content: content to create the node with.
Returns the value of the new node */
t_stack	*ft_lstnew(int content)
{
	t_stack	*new_element;

	new_element = malloc(sizeof(t_stack));
	if (new_element)
	{
		new_element->content = content;
		new_element->next = NULL;
	}
	return (new_element);
}

/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n\n", elem->content);
}*/