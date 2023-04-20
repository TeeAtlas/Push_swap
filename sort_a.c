/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/20 18:50:41 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
*  
*  all void fuctions becuase they are actions and not returning anything
*  if it's two numbers and the first is larger swap
*/

void	if_one_two(char **argv)
{
	t_stack	*temp;
	int 	node;

	node = 1;
	temp = *stack_a;
	if(node == 1 || node >=3)
		exit (1);
	else if (node <= 2)
		ft_swap_sa();
	// do nothing if there is only one number
}
