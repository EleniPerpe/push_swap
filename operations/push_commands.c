/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:15:50 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/18 17:25:07 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	int			i;
	long		number;

	if (a->size == 0)
		return ;
	i = b->capacity - 1;
	number = a->stack[0];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	ft_memmove(&(a->stack[0]), &(a->stack[1]), a->capacity * sizeof(long));
	a->size--;
	b->size++;
	b->stack[0] = number;
	write(1, "pb\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	int			i;
	long		number;

	if (b->size == 0)
		return ;
	i = a->capacity - 1;
	number = b->stack[0];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	ft_memmove(&(b->stack[0]), &(b->stack[1]), b->capacity * sizeof(long));
	b->size--;
	a->size++;
	a->stack[0] = number;
	write(1, "pa\n", 3);
}
