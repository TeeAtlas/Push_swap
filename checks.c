/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:03:58 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/30 13:56:22 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* 
takes array of string arguments and checks if each argument is a valid int
if not valid exits program with error message
if valis returns pointer to an array of ints containing converted values
*/

int	is_dup(char **argv)
{
	int		i;
	int 	j;
	int		len;

	i = 1;
	j = 2;
	while (argv[i]) // checks if first element exists
	{
		while(argv[j]) //ellement after current element
		{
			len = ft_strlen(argv[i + 1]);
			if (len != 0) //enters statement as long as string is not 0
			{
				if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i]) + 1) == 0)
				//above compartes strings till null term
					exit(write(2, "Error: duplicate values\n", 25));
				len = 0;
			}
			j++;
		}
		i++;
		j = i + 1; // so it can iterate the next element in argv
	}
	return (1);
}

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
			if (argv[i][j] == '-')
				j++;
			if (!ft_isdigit(argv[i][j])) //if not a digit we free memory
			{
				free(int_array);
				exit(write(2, "Error: invalid arguments\n", 26));
			}
			j++;//if it is a digit we conitnue to iterate
		}
		//if character is digit we convert string to and store at first position in 
		//int_array[i-1] at first position
		int_array[i-1] = ft_atoi_mod(argv[i]);
		i++;
	}
	return(int_array);
}

void	input_check(int argc, char **argv)
{
	int		*int_array;
	int		duplicate;
	int		index;
	t_list 	*stack;
	
	index = 1;
	if (argc <= 1)
		exit(write(2, "Error: invalid array\n", 22));
	int_array = valid_int(argc, argv);
	duplicate = is_dup(argv);
	stack = NULL;
	while (*++argv)
	{
		ft_lstadd_back(&stack, ft_lstnew_mod(ft_atoi_mod(*argv), index));
		index++; //increment index variable
	}
}


//  this interesting nugget of code: 
//  	while (*++argv) 
// 		ft_lstadd_back(&stack_a, ft_lstnew_mod(ft_atoi_mod(*argv), i));
//  increments the argc pointer to point to the next element in teh arrgay,
//  and then deregerences the pointer to access the value at that memory location
//  argv is an array of strings, *argv gives us teh current string being processe