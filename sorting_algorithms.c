/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithms.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:13:34 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/15 23:49:01 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sorting_algorithm(t_stack *stack__a, t_stack *stack__b)
{
	if (stack__a->capacity == 2)
	{
		short_algorithm(stack__a, stack__b);
	}
}

void	short_algorithm(t_stack *stack__a, t_stack *stack__b)
{
	if (stack__a->stack[0] > stack__a->stack[1])
		sa(stack__a);
}
