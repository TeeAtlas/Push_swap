/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/05 16:23:25 by taboterm         ###   ########.fr       */
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

void	swap_sb(t_list **stack_b)
{
	t_list	*element_1;
	t_list	*element_2;
	t_list	*element_3;
	
	element_1 = (*stack_b); //address to element_1
	element_2 = element_1->next; // address to element_2
	element_3 = element_2->next; // address to element_3
	element_2->next = element_1; // address 2 stored in 2 with -> to 3 
	element_1->next = element_3; // address 3 
	*stack_b = element_2;
	write(1, "sb\n", 3);
}

void	swap_ss(t_list **stack_a, t_list **stack_b)
{
	swap_sa(stack_a);
	swap_sb(stack_b);
	write(1, "ss\n", 3);
}