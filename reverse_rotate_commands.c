/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_commands.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:23:33 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/18 16:42:44 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	int	i;
	int	temp;
	int	flag;

	flag = 0;
	i = a->size - 1;
	temp = a->stack[i];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
		flag = 1;
	}
	if (flag == 1)
	{
		a->stack[0] = temp;
		write (1, "rra\n", 4);
	}
}

void	rrb(t_stack *b)
{
	int	i;
	int	temp;
	int	flag;

	flag = 0;
	i = b->size - 1;
	temp = b->stack[i];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
		flag = 1;
	}
	if (flag == 1)
	{
		b->stack[0] = temp;
		write (1, "rrb\n", 4);
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	int	i;
	int	temp_a;
	int	temp_b;
	int	flag;

	flag = 0;
	i = a->capacity - 1;
	temp_a = a->stack[i];
	temp_b = b->stack[i];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		b->stack[i] = b->stack[i - 1];
		i--;
		flag = 1;
	}
	if (flag == 1)
	{
		a->stack[0] = temp_a;
		b->stack[0] = temp_b;
		write (1, "rrr\n", 4);
	}
}
