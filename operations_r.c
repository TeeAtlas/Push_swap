/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/27 17:49:32 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ra(t_list **stack_a)
{
	t_list *last;

	last = (*stack_a);
	if (!*stack_a || !(*stack_a)->next) //if empty or only one element bounce
		return ;
	while (last->next != NULL) // finding last element
		last = last->next; // once it finds NULL reorders stack
	last->next = *stack_a; // last is pointing to first element in stack
	*stack_a = (*stack_a)->next; //move first element to the end
	last->next->next = NULL; //set next pointer of new last element
	write(1, "ra\n", 3);
}

void	rotate_rb(t_list **stack_b)
{
	t_list *last;

	last = *stack_b;
	if (!*stack_b || !(*stack_b)->next)
		return ;
	while (last->next != NULL) //while current element is not NULL
		last = last->next; //keep looking for last element
	//reorder the elements
	last->next = *stack_b; //last->next = NULL and set to point to fist element
	*stack_b = (*stack_b)->next; //2nd element now first moving first to end of stack
	last->next->next = NULL; //sets mext pointer of new last element to null
	//next next to null we disconnect first element from stack making new last elment
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
		first = current;
		current = current->next;
	}
	first->next = NULL; //remove last element from the list
	current->next = *stack_a; // adds last element to the top of the list
	*stack_a = current;
	write(1, "rra\n", 4);
}

//reverse rotate bottom element to top
void	rotate_rrb(t_list **stack_b)
{
	t_list	*first;
	t_list	*current;
	
	first = (*stack_b);
	current = first;
	if (!*stack_b || !(*stack_b)->next)
		return ;
	while(current->next != NULL)
	{
		first = current;
		current = current->next;
	}
	first->next = NULL;
	current->next = *stack_b;
	*stack_b = current;
	write(1, "rrb\n", 4);
}

// // rotate top to bottom of a and b at the same time
// void	rotate_rr(t_list **stack_a, t_list **stack_b)
// {
	
// }

// // rotate bottom to top of a and b at the same time
// void	rotate_rrr(t_list **stack_a, t_list **stack_b)
// {
	
// }
