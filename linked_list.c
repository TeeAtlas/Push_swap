/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:27:10 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/30 20:09:32 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	linked_list(t_list **stack_a, t_list **stack_a_cpy, char **argv)
{
	int i;
	int argc = 0;
	
	while (argv[argc])
		argc++;
	
	i = 1;
	*stack_a = NULL;
	*stack_a_cpy = NULL;
	while (argv[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew_mod(ft_atoi_mod(argv[i]), i));
		ft_lstadd_back(stack_a_cpy, ft_lstnew_mod(ft_atoi_mod(argv[i]), i));
		i++;
	}
}