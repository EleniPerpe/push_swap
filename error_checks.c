/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:57:00 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/15 22:13:39 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_structs(long *final_array, int len)
{
	t_stack	*stack__a;
	t_stack	*stack__b;

	stack__a = generate_stack(len);
	stack__b = generate_stack(len);
	fill_stack_b(stack__b, final_array);
	fill_stack(stack__a, final_array);
	free(final_array);
}

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
	j = 0;
	while (i < len)
	{
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
