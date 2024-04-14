/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:04:12 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 19:46:21 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*generate_stack(size_t len)
{
	t_stack	*stack;

	stack = (t_stack *)ft_calloc(len, sizeof(t_stack));
	stack->stack = (long *)ft_calloc(len, sizeof(long));
	stack->capacity = len;
	stack->size = 0;
	return (stack);
}

void	fill_stack(t_stack *stack, long *final_array)
{
	size_t	i;

	i = 0;
	while (i < stack->capacity)
	{
		stack->stack[i] = final_array[i];
		stack->size++;
		i++;
	}
	free(final_array);
}
