/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:01:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 20:07:49 by eperperi         ###   ########.fr       */
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

void	rb(t_stack *b)
{
	int		i;
	int		j;
	long	temp;
	int		swap;
	int		flag;

	flag = 0;
	i = 0;
	j = 1;
	temp = b->stack[0];
	while (i < b->capacity - 1)
	{
		b->stack[i] = b->stack[j + i];
		i++;
		flag = 1;
	}
	if (flag == 1)
	{
		b->stack[b->capacity - 1] = temp;
		write (1, "rb\n", 3);
	}
}

void	rr(t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	long	temp_a;
	long	temp_b;
	int		swap;

	i = 0;
	j = 1;
	temp_a = a->stack[0];
	temp_b = b->stack[0];
	while (i < a->capacity - 1)
	{
		b->stack[i] = b->stack[j + i];
		a->stack[i] = a->stack[j + i];
		i++;
	}
	a->stack[a->capacity - 1] = temp_a;
	b->stack[a->capacity - 1] = temp_b;
	write (1, "rr\n", 3);
}
