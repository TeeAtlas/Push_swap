/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:34:38 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/18 17:38:34 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_position(t_list **stack)
{
	int	i;
	
	i = 0;
	while(*stack)
	{
		if((*stack)->val == 0)
			return i;
		i++;
		(*stack) = (*stack)->next;
	}
	return (0);
}			