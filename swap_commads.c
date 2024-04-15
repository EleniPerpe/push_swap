/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_commads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:01:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/15 15:45:31 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	long	temp;
	int		flag;

	flag = 0;
	if (a->size != 0 || a->size != 1)
	{
		temp = a->stack[0];
		a->stack[0] = a->stack[1];
		a->stack[1] = temp;
		flag = 1;
	}
	if (flag == 1)
		write (1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	long	temp;
	int		flag;

	flag = 0;
	if (b->size != 0 || b->size != 1)
	{
		temp = b->stack[0];
		b->stack[0] = b->stack[1];
		b->stack[1] = temp;
		flag = 1;
	}
	if (flag == 1)
		write (1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	long	temp;
	int		flag;

	flag = 0;
	if (a->size != 0 || a->capacity != 1)
	{
		temp = a->stack[0];
		a->stack[0] = a->stack[1];
		a->stack[1] = temp;
		flag++;
	}
	if (b->size != 0 || b->capacity != 1)
	{
		temp = b->stack[0];
		b->stack[0] = b->stack[1];
		b->stack[1] = temp;
		flag++;
	}
	if (flag == 2)
		write (1, "ss\n", 3);
}
