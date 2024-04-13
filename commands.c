/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:01:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/13 21:20:05 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(long *a, int len)
{
	long	temp;
	int		flag;

	flag = 0;
	if (len != 0 || len != 1)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		flag = 1;
	}
	if (flag == 1)
		write (1, "sa\n", 3);
}

void	sb(long *b, int len)
{
	long	temp;
	int		flag;

	flag = 0;
	if (len != 0 || len != 1)
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
	}
	if (flag == 1)
		write (1, "sb\n", 3);
}

void	ss(long *b, long *a, int len)
{
	long	temp;
	int		flag;

	flag = 0;
	if (len != 0 || len != 1)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		flag++;
	}
	if (len != 0 || len != 1)
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		flag++;
	}
	if (flag == 2)
		write (1, "ss\n", 3);
}

void	ra(long *a, int len)
{
	int	i;
	int	j;
	int	temp;
	int	swap;
	int	flag;

	flag = 0;
	i = 0;
	j = 1;
	temp = a[0];
	while (i < len - 1)
	{
		a[i] = a[j + i];
		i++;
		flag = 1;
	}
	if (flag == 1)
	{
		a[len - 1] = temp;
		write (1, "ra\n", 3);
	}
}

void	rb(long *b, int len)
{
	int	i;
	int	j;
	int	temp;
	int	swap;
	int	flag;

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
	int	i;
	int	j;
	int	temp_a;
	int	temp_b;
	int	swap;

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
