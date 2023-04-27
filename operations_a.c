/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/27 13:49:35 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* sorting stack only if number on the top is higher than the bottom 
and swap so as to arrange in ascending order 
same operation as ft_swap from exam basic operation requires two ints
and follows a pretty easy pattern of temp - a - a - b - b - temp 
full circle*/

// void	swap_sa(t_list **stack_a)
// {
// 	t_list	*element_1;
// 	t_list	*element_2;
// 	t_list	*element_3;
	
// 	element_1 = (*stack_a); //address to element_1
// 	element_2 = element_1->next; // address to element_2
// 	element_3 = element_2->next; // address to element_3
// 	element_2->next = element_1; // address 2 stored add -> to 3 
// 	element_1->next = element_3; 
// 	*stack_a = element_2; //address to node 2 stored in 2 assinged to stack a
// 	write(1, "sa\n", 3);
// }

// void	swap_sb(t_list **stack_b)
// {
// 	t_list	*element_1;
// 	t_list	*element_2;
// 	t_list	*element_3;
	
// 	element_1 = (*stack_b); //address to element_1
// 	element_2 = element_1->next; // address to element_2
// 	element_3 = element_2->next; // address to element_3
// 	element_2->next = element_1; // address 2 stored in 2 with -> to 3 
// 	element_1->next = element_3; // address 3 
// 	*stack_b = element_2;
// 	write(1, "sb\n", 3);
// }


// /* all elements shifted up one so first element becomes last */
// void	rotate_ra(t_list **stack_a)
// {
// 	t_list		*first;
// 	t_list		*current;
// 	t_list		*last;
	
// 	first = (*stack_a);
// 	current = first->next;
// 	last = current;
// 	if (!*stack_a || !(*stack_a->next)) //if stack empty or one element
// 		return ;
// 	/* search list to find last element */
// 	while (current != NULL)
// 	{ 
// 		last = current; // set last to current element
// 		current = current->next; // move current to the next element
// 	}
// 	/* now we rearrange list to rotate elements */
// 	current = (*stack_a); //reset current to first element
// 	(*stack_a) = (*stack_a)->next; // set next pointer of fist element
// 	current->next = NULL; // move first element to the end
// 	last->next = current; // set next pointer to last element
// 	write(1, "ra\n", 3); //print instruction for debugging
// }

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





// /* elements of stack_b shifted down one so last becomes first */
// void	rotate_rb(t_list **stack_b)
// {
// 	t_list	*first;
// 	t_list	*current;
// 	t_list	*last;

// 	first = (*stack_b);
// 	current	= first->next;
// 	last = current;
// 	if (!*stack_b || (*stack_b->next))
// 		return ;
// 	while (current != NULL)
// 	{
// 		last = current;
// 		current = current->next;
// 	}
// 	current = (*stack_b);
// 	(*stack_b) = (*stack_b)->next;
// 	current->next = NULL;
// 	last->next = current;
// 	write(1, "rb\n", 3);
// }

// void	rotate_rb(t_list **stack_a)
// {
// 	t_list *last;

// 	last = *stack_b
// 	if (!*stack_b || !(*stack_b)->next)
// 		return ;
// 	while (lst->next != NULL) //while current element is not NULL
// 		last = last->next; //keep looking for last element
// 	//reorder the elements
// 	last->next = *stack_b; //last->next = NULL and set to point to fist element
// 	*stack_b = (*stack_b)->next; //2nd element now first moving first to end of stack
// 	last->next->next = NULL; //sets mext pointer of new last element to null
// 	//next next to null we disconnect first element from stack making new last elment
// }
