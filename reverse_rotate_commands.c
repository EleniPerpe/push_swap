/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_commands.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:23:33 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 19:25:19 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(long *a, int len)
{
	int	i;
	int	temp;
	int	swap;
	int	flag;

	flag = 0;
	i = len - 1;
	temp = a[i];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
		flag = 1;
	}
	if (flag == 1)
	{
		a[0] = temp;
		write (1, "rr\n\n", 4);
	}
}

void	rrb(long *b, int len)
{
	int	i;
	int	temp;
	int	swap;
	int	flag;

	flag = 0;
	i = len - 1;
	temp = b[i];
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
		flag = 1;
	}
	if (flag == 1)
	{
		b[0] = temp;
		write (1, "rr\n\n", 4);
	}
}

void	rrr(long *a, long *b, int len)
{
	int	i;
	int	temp_a;
	int	temp_b;
	int	swap;
	int	flag;

	flag = 0;
	i = len - 1;
	temp_a = a[i];
	temp_b = b[i];
	while (i > 0)
	{
		a[i] = a[i - 1];
		b[i] = b[i - 1];
		i--;
		flag = 1;
	}
	if (flag == 1)
	{
		a[0] = temp_a;
		b[0] = temp_b;
		write (1, "rrr\n\n", 4);
	}
}
