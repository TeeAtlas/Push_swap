/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/21 18:41:00 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
*  
*  all void fuctions becuase they are actions and not returning anything
*  if it's two numbers and the first is larger swap
*/

void	if_onetwothree(int argc, char **argv)
{
	if(argc <= 2)
	{
		write(2, "Nothing to swap\n", 17);
	 	exit (1);
	}
	else if(argc == 3)
		swap_sa((t_stack**)argv, 1);
	else if(argc == 4)
		under_four();
}
