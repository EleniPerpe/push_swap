/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_commads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:01:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 12:22:58 by eperperi         ###   ########.fr       */
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
