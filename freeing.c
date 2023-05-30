/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:15:25 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/30 15:54:14 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeing_stack(t_list **stack)
{
	ft_lstclear(stack);
}

void	free_all(t_list **stack_a, t_list **stack_b, t_list **stack_a_cpy)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_a_cpy);
	ft_lstclear(stack_b);
}