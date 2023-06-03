/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:47:14 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/03 19:33:45 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* index to sort numbers in acsending order on liked list */
/* void because you are not returning a value */
/* swap variable is used to determine whether any swaps */
/* were made during the pass throught the linked list*/
/* the swap condition prevents unneccessary iterations */


//function to update index after sorting
void	update_index(t_list **stack)
{
	int		i; 
	t_list	*current; 
	
	i = 1;
	current = (*stack); // declare current as pointer to stack
	while (current != NULL)
	{
		current->index = i; //assign index to current node
		i++;
		current = current->next; // set current to next node until null
	}
}



void reassign_index(t_list **stack, t_list **stack_cpy)
{
    t_list *current_cpy;
	t_list *current; 
	
	current_cpy = *stack_cpy; //pointer to iterate through stack_cpy

    while (current_cpy != NULL)
    {
        current = *stack; // pointer to iterate through stack_original

        while (current != NULL)
        {
            if (current->val == current_cpy->val) //check if value match
            {
                current->index = current_cpy->index; //assign index from stack_cpy to stack
                break; // exit inner loop once index is assigned
            }
            current = current->next; //move to next node in stack
        } 

        current_cpy = current_cpy->next; //move to next node in stack_cpy
    }
}