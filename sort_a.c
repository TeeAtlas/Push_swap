/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/08 14:48:33 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
*  
*  all void fuctions becuase they are actions and not returning anything
*  if it's two numbers and the first is larger swap
*
*  @note previously I delcared argc and argv but because argv is an array of 
* pointers to characters i could not start to swap so I had to pass a pointer to 
* linked list of integers
*/

// swaps numbers if the first is larger than the second
void	if_two(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;

	first = (*stack_a);
	second = first->next;
	if (first->content < second->content)
		return ;
	else if (first->content > second->content)
		swap_sa(stack_a);
}
