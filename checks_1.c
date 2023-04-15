/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:03:58 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/15 17:19:59 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*valid_int(int argc, char **argv)
{
	int i;
	int j;
	int *int_array;
	
	i = 1;
	int_array = malloc(sizeof(int) * (argc - 1));
	if (!int_array)
		exit(ft_printf("Error: Can not allocate memory\n"));
	while(argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				free(int_array);
				exit(ft_printf("Error: invalid arguments\n"));
			}
			j++;
		}
		int_array[i-1] = ft_atoi(argv[i]);
		i++;
	}
	return(int_array);
}

void	input_check(int argc, char **argv)
{
	int *int_array;
	
	if (argc <= 2)
	{
		ft_printf("Error\n");
		exit (1);
	}
	int_array = valid_int(argc, argv);
}
