/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:47:14 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/28 15:56:28 by taboterm         ###   ########.fr       */
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
	if_three(stack_a); // sort the remaining three nodes
	push_pa(stack_a, stack_b); // push first node to stack_a
	push_pa(stack_a, stack_b); // push first node to stack_a
}