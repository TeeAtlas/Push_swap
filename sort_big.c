/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:29:17 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/28 16:42:12 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_value(t_list **stack)
{
	t_list *current;
	int max;

	current = *stack;
	max = current->val;
	while (current != NULL)
	{
		if (current->val > max)
			max = current->val;
		current = current->next;
	}
	return (max);
}