/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:26:33 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/18 17:25:37 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	bits_calc(int num)
{
	int	bits;

	bits = 1;
	while (num > 1)
	{
		bits++;
		num /= 2;
	}
	return (bits);
}

void	radix(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	bits;

	bits = bits_calc(a->capacity - 1);
	i = 0;
	while (i < bits && check_if_sort(a) != a->capacity)
	{
		j = 0;
		while (j < a->capacity && check_if_sort(a) != a->capacity)
		{
			if (((a->stack[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->size > 0)
		{
			pa(a, b);
		}
		i++;
	}
}
