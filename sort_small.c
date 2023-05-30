/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/28 16:18:45 by taboterm         ###   ########.fr       */
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
void	sort_two(t_list **stack_a)
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

void	sort_three(t_list **stack_a)
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

int	min_value(t_list **stack)
{
	t_list	*current;
	int		min;

	current = (*stack); // declare current as pointer to stack
	min = current->val; // set min to current value
	while (current != NULL) // as long as the stack is not empty
	{
		if (current->val < min) // if current value is less than min value
			min = current->val; // set min to current value
		current = current->next; // set current to next node until null
	}
	return (min); // return min value
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	min;
	
	min = min_value(stack_a); // find min value in stack_a
	while ((*stack_a)->val != min) // while the first node is not the min value
		rotate_ra(stack_a); // rotate stack_a until it is
	push_pb(stack_a, stack_b); // push first node to stack_b
	sort_three(stack_a); // sort the remaining three nodes
	push_pa(stack_a, stack_b); // push node back to stack_a from b
	
}

//the while(1) is an infinite loop that untill a specific condition is met
// in this case the first node is the min value
// one it's found it will break out of the loop
void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		current_min;
	t_list 	*last;
	
	last = ft_lstlast(*stack_a); //storing pointer to last node in last
	if (last != NULL) // if last node is not null
		last->next = NULL; // we set the last node to NULL
	min = min_value(stack_a); // find min value in stack_a
	while ((*stack_a)->val != min) // while the first node is not the min value
		rotate_ra(stack_a); // rotate stack_a
	push_pb(stack_a, stack_b); // push first node to stack_b
	current_min = min_value(stack_a); // find min value in stack_a
	if (last->val == current_min) // if the first node is the min_next value
		rotate_rra(stack_a); // rotate stack_a
	else if (last->val != current_min) // if the first node is not the min value
	{
		while ((*stack_a)->val != current_min) // while the first node is not the min value
			rotate_ra(stack_a); // rotate stack_a
	}
	push_pb(stack_a, stack_b); // push first node to stack_b
	sort_three(stack_a); // sort the remaining three nodes
	push_pa(stack_a, stack_b); // push first node to stack_a
	push_pa(stack_a, stack_b); // push first node to stack_a
}