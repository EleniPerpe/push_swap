/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:57:00 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/15 23:45:59 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(long *final_array, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (j == i)
				j++;
			if (final_array[i] == final_array[j])
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_max(long *final_array, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (final_array[i] > 2147483647)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_digits(char **stack_a, int len)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (stack_a[i][j] != '\0')
		{
			if (stack_a[i][j] >= '0' && stack_a[i][j] <= '9')
				flag = 0;
			else
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 1)
			break ;
		i++;
	}
	return (flag);
}
