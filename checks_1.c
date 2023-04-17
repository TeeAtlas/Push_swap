/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:03:58 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/17 17:46:19 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 
takes array of string arguments and checks if each argument is a valid int
if not valid exits program with error message
if valis returns pointer to an array of ints containing converted values
*/
int	*valid_int(int argc, char **argv)
{
	int i;
	int j;
	int *int_array;
	
	i = 1;
	// returns pointed to allocated memory block stored in int_array
	int_array = malloc(sizeof(int) * (argc - 1)); 
	if (!int_array) //if NULL we exit program
		exit(1);
	while(argv[i]) //outer loop that iterates through argv array starting at index 1
	{
		j = 0; //inner loop iterates through each character
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j])) //if not a digit we free memory
			{
				free(int_array);
				exit(ft_printf("Error: invalid arguments\n"));
			}
			j++;//if it is a digit we conitnue to iterates
		}
		//if character is digit we convert string to and store at first position in 
		//int_array[i-1] at first position
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
		ft_printf("Error: invalid array\n");
		exit (1);
	}
	int_array = valid_int(argc, argv);
}
