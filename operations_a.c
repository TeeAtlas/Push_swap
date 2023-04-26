/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/26 20:39:43 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* sorting stack only if number on the top is higher than the bottom 
and swap so as to arrange in ascending order 
same operation as ft_swap from exam basic operation requires two ints
and follows a pretty easy pattern of temp - a - a - b - b - temp 
full circle*/

void	swap_sa(t_list **stack_a)
{
	t_list	*element_1;
	t_list	*element_2;
	t_list	*element_3;
	
	element_1 = (*stack_a); //address to element_1
	element_2 = element_1->next; // address to element_2
	element_3 = element_2->next; // address to element_3
	element_2->next = element_1; // address 2 stored add -> to 3 
	element_1->next = element_3; 
	*stack_a = element_2; //address to node 2 stored in 2 assinged to stack a
	write(1, "sa\n", 3);
}

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


// /* all elements shifted down one so last becomes first */
// void	rotate_ra(t_list **stack_a)
// {
// 	t_list		*current;
// 	t_list		*last;
// 	long int	i;

// 	i = 0;
// 	current = (*stack_a);
// 	current->next = current;
// 	last = (current->next = NULL);
// 	/*so current elemnet always stores the address to the 
// 	previous element and pointer to next*/
// 	while (!last)
// 	{
// 		current = current->next;
// 		i++;
// 	}
// 	(*stack_a)->next = last;
// 	write(1, "ra\n", 3);
// 	/* move all elements down one 
// 	then move last element with NULL to 
// 	top of list */
// }
