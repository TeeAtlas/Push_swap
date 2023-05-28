/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:47:14 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/28 11:21:09 by taboterm         ###   ########.fr       */
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


void	index_val_swap(t_list **stack)
{
	t_list		*current;
	t_list		*next;
	long int	temp_val;
	int 		temp_i;
	 
	current = (*stack); // declare current as pointer to stack
	next = current->next; // declare next as pointer to next node
	while (next != NULL) // as long as the stack is not empty
	{
		if (current->val > next->val) // if current value is greater than next value
		{
			temp_val = current->val; // store current value in temp
			temp_i = current->index; // store current index in temp
			current->val = next->val; // assign next value to current
			current->index = next->index; // assign next index to current
			next->val = temp_val; // assign temp value to next
			next->index = temp_i; // assign temp index to next
		}
		current = current->next; // set current to next node until null
		next = next->next; // set next to next node until null
	}				
	
}

void	bubble_sort(t_list **stack)
{
	t_list		*current;
	t_list		*previous;
	t_list		*curr_cpy;
	bool		swapped;

	if((*stack) == NULL || (*stack)->next == NULL)
		return ;
	swapped = true; // set to true means list is not fully sorted
	current = (*stack); //start from head of liked list
	previous = NULL;
	while (swapped)
	{
		swapped = false; // 0 =false no swaps were made during current pass = sorted
		curr_cpy = current;
		while(curr_cpy->next != previous)
		{
			if(curr_cpy->val > curr_cpy->next->val)
			{
				index_val_swap(stack);
				swapped = true; //set swapped to true
			}
			curr_cpy = curr_cpy->next; //moving to next node
		}
		previous = current; //moving previous pointer
		current = current->next;
	}
}


void	if_four_five(t_list **stack)
{
	bubble_sort(stack);
	reassign_index(stack, stack);
	update_index(stack);
}