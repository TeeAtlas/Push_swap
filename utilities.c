/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:41:02 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/16 18:53:37 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_list **stack)
{
	t_list  *temp;
	int		i;
	
	temp = *stack;
	i = 0;
	while (*stack != NULL)
	{
		i = 1;
		while (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
	}
	return(i);
}