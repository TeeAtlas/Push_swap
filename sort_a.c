/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/17 11:01:39 by taboterm         ###   ########.fr       */
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
	if (first->val < second->val)
		return ;
	else if (first->val > second->val)
		swap_sa(stack_a);
}

void	if_three(t_list **stack_a)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = (*stack_a);
	b = a->next;
	c = b->next;
	if (stack_a != NULL)
	{
		if (a->val < b->val && a->val < c->val && b->val > c->val) // if 1 3 2
		{
			rotate_rra(stack_a);
			swap_sa(stack_a);
		}
		if (a->val > b->val && a->val > c->val && b->val > c->val && c->val < b->val) // 3 2 1
		{
			swap_sa(stack_a);
			rotate_rra(stack_a);
		}
		if (a->val > b->val && a->val > c->val && b->val < c->val) // if 3 1 2 
			rotate_ra(stack_a);
		if (a->val > b->val && a->val < c->val && b->val < c->val) // if 2 1 3
			swap_sa(stack_a);
		if (a->val < b->val && a->val > c->val && b->val > c->val) // if 2 3 1 
			rotate_rra(stack_a);
		else 
			return ;
	}
}

void push_two_b(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL)
	{
		// if four = do I need if argc is 5 one call for function but if 6 two calls?
		push_pb(stack_a, stack_b);
		push_pb(stack_a, stack_b);
	}
}

void	if_four(t_list **stack_a, t_list **stack_b)
{
	// t_list *a;
	// t_list *b;
	// t_list *c;
	// t_list *d;

	// a = (*stack_a);
	// b = a->next;
	// c = b->next;
	// d = c->next;
	if(stack_a != NULL)
	{
		push_pb(stack_a, stack_b);
		if_three(stack_a);
		push_pa(stack_a, stack_b);
	}
}

// /* sorts stack of five elements in ascending order */
// void	if_five(t_list **stack_a, t_list **stack_b)
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
// 	t_list *d;
// 	t_list *e;

// 	a = (*stack_a);
// 	b = a->next;
// 	c = b->next;
// 	d = c->next;
// 	e = d->next;
	
// 	push_two_b(stack_a, stack_b);
// 	if (stack_a)
// 		if_three(stack_a);
// 	if (stack_b)
// 		if_two(stack_b);
// 	push_pa(stack_a, stack_b);
// 	if (stack_a)
// 	{
// 		if ()
// 	}
// }