/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/11 14:57:12 by taboterm         ###   ########.fr       */
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
	while (!*stack_a)
		return ;
	if (first->content < second->content)
		return ;
	else if (first->content > second->content)
		swap_sa(stack_a);
}

void	if_three(t_list **stack_a)
{
	t_list	*f;
	t_list	*s;
	t_list	*t;

	f = (*stack_a);
	s = f->next;
	t = s->next;
	if (stack_a != NULL)
	{
		if (f->content < s->content && f->content < t->content && s->content < t->content) //if 1 2 3 = nothing to be done
			return ;
		else if (f->content > s->content && f->content > t->content && s->content > t->content && t->content < s->content) // 3 2 1
		{
			swap_sa(stack_a);
			rotate_rra(stack_a);
		}
		else if (f->content > s->content && f->content < t->content && s->content < t->content) // if 2 1 3
			swap_sa(stack_a);
		else if (f->content > s->content && f->content > t->content && s->content < t->content) // if 3 1 2 
			rotate_ra(stack_a);
		else if (f->content < s->content && f->content > t->content && s->content > t->content) // if 2 3 1 
			rotate_rra(stack_a);
	}
}