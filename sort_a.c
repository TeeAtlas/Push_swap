/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:05:08 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/24 15:01:09 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
*  
*  all void fuctions becuase they are actions and not returning anything
*  if it's two numbers and the first is larger swap
*
*  @note previously I delcared argc and argv but because argv is an array of 
* pointers to characters i could not start to swap so I had to pass a pointer to 
* linked list of integers
*/

void	if_one_two(int argc, char **argv)
{
	if(argc <= 2)
	{
		write(2, "Nothing to swap\n", 17);
	 	exit (1);
	}
	else if(argc == 3)
		swap_sa((t_list **)&argv);
	// else if(argc == 4)
	// 	under_four();
}
