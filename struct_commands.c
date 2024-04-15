/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:04:12 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/15 21:21:21 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*char_to_long(char **stack_a, int len)
{
	long	*temp;

	temp = (long *)malloc(len * sizeof(long));
	if (temp == NULL)
		return (0);
	while (--(len) > -1)
		temp[len] = ft_atol(stack_a[len]);
	return (temp);
}

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
	// free(final_array);
}

void	fill_stack_b(t_stack *stack, long *final_array)
{
	size_t	i;

	i = 0;
	while (i < 3)
	{
		stack->stack[i] = final_array[i];
		stack->size++;
		i++;
	}
	// free(final_array);
}
