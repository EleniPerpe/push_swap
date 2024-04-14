/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_commands_old.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:15:50 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 19:57:02 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	pa(long *a, long *b, int nums_b, int len)
// {
// 	int			i;
// 	long		temp;

// 	i = len - 1;
// 	if (nums_b != 0)
// 	{
// 		while (i > 0)
// 		{
// 			a[i] = a[i - 1];
// 			i--;
// 		}
// 		a[0] = b[0];
// 		nums_b++;
// 	}
// 	write(1, "pa\n", 3);
// 	return (nums_b);
// }

// void	pb(long *a, long *b, int len)
// {
// 	int			i;
// 	static int	counter_a;
// 	long		temp;

// 	i = len - 1;
// 	if (a != 0)
// 	{
// 		while (i > 0)
// 		{
// 			b[i] = b[i - 1];
// 			i--;
// 		}
// 		b[0] = a[0];
// 		counter_a++;
// 	}
// 	write(1, "pa\n", 3);
// }

void	pb(t_stack *a, t_stack *b)
{
	int			i;
	long		temp;
	long		number;

	i = b->capacity - 1;
	if (a->size == 0)
		return ;
	number = a->stack[0];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	ft_memmove(&(a->stack[0]), &(a->stack[1]), a->capacity * sizeof(long));
	a->size--;
	b->stack[0] = number;
	write(1, "pb\n", 3);
}
