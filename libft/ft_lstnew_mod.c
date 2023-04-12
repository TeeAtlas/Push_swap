/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:59 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/12 20:10:32 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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