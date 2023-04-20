/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:34:49 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/20 18:44:21 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa()
{
	int node;

	node = 1;
	if(node == 1 || node >=3)
		exit (1);
	else if (node <= 2)
		ft_swap_sa();
	// do nothing if there is only one number
}

void	swap_sb()
{
	
}