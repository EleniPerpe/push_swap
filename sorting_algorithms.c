/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithms.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:13:34 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/17 16:06:02 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sorting_algorithm(t_stack *a, t_stack *b)
{
	int		i;

	i = check_if_sort(a);
	if (i == a->capacity)
		return ;
	else if (a->capacity == 3)
		sort_3(a);
	else if (a->capacity == 4)
		sort_4(a, b);
	else if (a->capacity == 5)
		sort_5(a, b);
	else
		radix(a, b);
}

int	check_if_sort(t_stack *a)
{
	int	i;

	i = 1;
	while (i < a->capacity)
	{
		if (a->stack[i] < a->stack[i - 1])
			break ;
		i++;
	}
	return (i);
}

void	sort_3(t_stack *a)
{
	if (a->stack[0] > a->stack[1] && a->stack[1] < a->stack[2])
	{
		if (a->stack[0] > a->stack[2])
			ra(a);
		else
			sa(a);
	}
	else if (a->stack[0] < a->stack[1])
	{
		if (a->stack[0] < a->stack[2])
		{
			rra(a);
			sa(a);
		}
		else
			rra(a);
	}
	else if (a->stack[0] > a->stack[1] && a->stack[1] > a->stack[2])
	{
		ra(a);
		sa(a);
	}
	else
		return ;
}

void	sort_5(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a->stack[0] != 0)
	{
		ra(a);
	}
	pb(a, b);
	while (a->stack[0] != 1)
	{
		ra(a);
	}
	pb(a, b);
	a->size = 3;
	i = check_if_sort(a);
	if (i != a->size)
		sort_3(a);
	pa(a, b);
	pa(a, b);
}

void	sort_4(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a->stack[0] != 0)
	{
		ra(a);
	}
	pb(a, b);
	a->size = 3;
	i = check_if_sort(a);
	if (i != a->size)
		sort_3(a);
	pa(a, b);
}
