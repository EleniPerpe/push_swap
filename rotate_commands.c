/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:01:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 20:01:20 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int		i;
	int		j;
	long	temp;
	int		swap;
	int		flag;

	flag = 0;
	i = 0;
	j = 1;
	temp = a->stack[0];
	while (i < a->capacity - 1)
	{
		a->stack[i] = a->stack[j + i];
		i++;
		flag = 1;
	}
	if (flag == 1)
	{
		a->stack[a->capacity - 1] = temp;
		write (1, "ra\n", 3);
	}
}

void	rb(long *b, int len)
{
	int		i;
	int		j;
	long	temp;
	int		swap;
	int		flag;

	flag = 0;
	i = 0;
	j = 1;
	temp = b[0];
	while (i < len - 1)
	{
		b[i] = b[j + i];
		i++;
		flag = 1;
	}
	if (flag == 1)
	{
		b[len - 1] = temp;
		write (1, "rb\n", 3);
	}
}

void	rr(long *a, long *b, int len)
{
	int		i;
	int		j;
	long	temp_a;
	long	temp_b;
	int		swap;

	i = 0;
	j = 1;
	temp_a = a[0];
	temp_b = b[0];
	while (i < len - 1)
	{
		b[i] = b[j + i];
		a[i] = a[j + i];
		i++;
	}
	a[len - 1] = temp_a;
	b[len - 1] = temp_b;
	write (1, "rr\n", 3);
}
