/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:34:38 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/19 17:45:22 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	min_value(t_list **stack)
// {
// 	int	min;
	
// 	min = (*stack)->val;
// 	while(*stack)
// 	{
// 		if((*stack)->val < min)
// 			min = (*stack)->val;
// 		(*stack) = (*stack)->next;
// 	}
// 	return (min);
// }

int	min_value(t_list **stack)
{
	int	min;
	int	position;
	int	minPosition;
	
	min = (*stack)->val;
	position = 0;
	minPosition = 0;
	while(*stack)
	{
		if((*stack)->val < min)
		{ 
			printf("hello");
			min = (*stack)->val;
			minPosition = position;
		}
		(*stack)->index = position;
		(*stack) = (*stack)->next;
		position++;
	}
	return (minPosition);
}