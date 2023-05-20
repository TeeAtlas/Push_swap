/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:47:14 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/20 15:59:00 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* index to sort numbers in acsending order on liked list */
/* void because you are not returning a value */
/* swap variable is used to determine whether any swaps */
/* were made during the pass throught the linked list*/
/* the swap condition prevents unneccessary iterations */

void	update_index(t_list **stack)
{
	int		i;
	t_list	*current;
	
	i = 1;
	current = (*stack);
	while (current != NULL)
	{
		current->index = i;
		i++;
		current = current->next;
	}
}

void	assign_indexes(t_list **stack, t_list **stack_cpy)
{
	t_list *current;
	t_list *current_cpy;
	
	current = (*stack); // pointers to iterate through stacks
	current_cpy = (*stack_cpy);
	while (current != NULL && current_cpy != NULL)
	{
		current->index = current_cpy->index; // assing index from cpy to original stack
		current = current->next; // move to next node in original stack
		current_cpy = current_cpy->next; // move to next node in copy
	}
}

void	index_val_swap(t_list **stack)
{
	t_list		*current;
	long int	temp_val;
	int 		temp_i;
	
	current = (*stack);
	// if current nodes value is greater than the next - swap
	temp_val = current->val; //first swap values
	current->val = current->next->val;
	current->next->val = temp_val;
	//now swap indexes
	temp_i = current->index;
	current->index = current->next->index;
	current->next->index = temp_i;

}

void	bubble_sort(t_list **stack)
{
	t_list		*current;
	t_list		*previous;
	t_list		*curr_cpy;
	int			swapped;

	if((*stack) == NULL || (*stack)->next == NULL)
		return ;
	swapped = 1; // set to true means list is not fully sorted
	current = (*stack); //start from head of liked list
	previous = NULL;
	while (swapped)
	{
		swapped = 0; // 0 =false no swaps were made during current pass = sorted
		curr_cpy = current;
		while(curr_cpy->next != previous)
		{
			if(curr_cpy->val > curr_cpy->next->val)
			{
				index_val_swap(stack);
				swapped = 1; //set swapped to true
			}
			curr_cpy = curr_cpy->next; //moving to next node
		}
		previous = current; //moving previous pointer
		current = current->next;
	}
}


int	stack_len(t_list *stack_a)
{
	int i;
	t_list *temp;

	i = 1;
	temp = stack_a;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return(i);
}
