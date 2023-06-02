/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/02 13:49:02 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// first element becomes last - stack a
void	rotate_ra(t_list **stack_a)
{
	t_list *last;

	last = (*stack_a);
	if (!*stack_a || !(*stack_a)->next) //if empty or only one element bounce
		return ;
	while (last->next != NULL) // while node is not NULL
		last = last->next; // looking for last element
	last->next = *stack_a; // last element next pointer now points to entire stack
	*stack_a = (*stack_a)->next; //moves first element to end by making second element new first element
	last->next->next = NULL; //sets new last element 
	//(which is was the first element and still points to the second) to null disconnecting it from the stack
	write(1, "ra\n", 3);
}

//reverse rotate bottom element to top
void	rotate_rra(t_list **stack_a)
{
	t_list	*first;
	t_list	*current;

	first = (*stack_a);
	current = first;
	if (!*stack_a || !(*stack_a)->next) //if list is empty or only one node bounce
		return ;
	while(current->next != NULL) //looking for second to last element
	{
		first = current; // when leaves list is pointing to second to last
		current = current->next; // points to last
	}
	first->next = NULL; // now we set pointer to last puting at end of list
	current->next = *stack_a; // adds last element to the top of the list
	*stack_a = current; // stack_a points to top of stack
	write(1, "rra\n", 4);
}

// first element becomes last - stack_b
void	rotate_rb(t_list **stack_b)
{
	t_list *last;

	last = *stack_b;
	if (!*stack_b || !(*stack_b)->next)
		return ;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next->next = NULL;
	write(1, "ra\n", 3);
}

// rotate top to bottom of a and b at the same time
void	rotate_rr(t_list **stack_a, t_list **stack_b)
{
	rotate_ra(stack_a);
	rotate_rb(stack_b);
	write (1, "rr\n", 3);
}


//reverse rotate bottom element to top
void	rotate_rrb(t_list **stack_b)
{
	t_list	*first;
	t_list	*current;
	
	first = (*stack_b); // both variables point to top of stack_b
	current = first;
	if (!*stack_b || !(*stack_b)->next) // if empty or only one node, bounce
		return ;
	while(current->next != NULL)
	{
		first = current; //first then becomes second last node
		current = current->next; // current becomes last node with pointer
	}
	first->next = NULL; // set first pointer to null, making it last
	current->next = *stack_b; // set current to top of list
	*stack_b = current; // stack_b pointer points to top of list
	write(1, "rrb\n", 4);
}


// rotate bottom to top of a and b at the same time
void	rotate_rrr(t_list **stack_a, t_list **stack_b)
{
	rotate_rra(stack_a);
	rotate_rrb(stack_b);
	write(1, "rrr\n", 4);
}
