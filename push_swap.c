/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:44:48 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 20:09:36 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(long *a, int len);
long	*create_stack(char **argv, int argc, int *len, int *i);
long	*bubble_sort(long *temp, int len);
long	*index_play(long *temp, int len);
long	*array_iteration(long *temp, long *final_array, int len);
long	*swap_control(long *a, int len);
void	print_stack(t_stack *stack);

int	main(int argc, char **argv)
{
	char	**stack_a;
	int		i;
	long	*temp;
	long	*final_array;
	int		len;
	t_stack	*stack__a;
	t_stack *stack__b;

	temp = create_stack(argv, argc, &len, &i);
	final_array = ft_strdup(temp, len);
	temp = bubble_sort(temp, len);
	final_array = array_iteration(temp, final_array, len);
	stack__a = generate_stack(len);
	stack__b = generate_stack(len);
	fill_stack(stack__a, final_array);
	// pb(stack__a, stack__b);
	// pb(stack__a, stack__b);
	print_stack(stack__a);
	rr(stack__a, stack__b);
	print_stack(stack__a);
	print_stack(stack__b);

	return (0);
}

void	print(long *a, int len)
{
	int	i;
	int	num;

	i = 0;
	while (i < len)
	{
		printf("%ld\n", a[i]);
		i++;
	}
	printf("\n");
}

void	print_stack(t_stack *stack)
{
	int	i;
	int	num;

	i = 0;
	while (i < stack->capacity)
	{
		printf("%ld\n", stack->stack[i]);
		i++;
	}
	printf("\n");
}

long	*create_stack(char **argv, int argc, int *len, int *i)
{
	long	*temp;
	char	**stack_a;

	if (argc == 2)
		stack_a = ft_split(argv[1], ' ', i);
	else
	{
		stack_a = (char **)malloc(argc * sizeof(char *));
		if (stack_a == NULL)
			return (0);
		*i = 0;
		while ((*i) < argc - 1)
		{
			stack_a[*i] = argv[*i + 1];
			(*i)++;
		}
		stack_a[argc] = NULL;
	}
	temp = (long *)malloc(*i * sizeof(long));
	if (temp == NULL)
		return (0);
	*len = *i;
	while (--(*i) > -1)
		temp[*i] = ft_atol(stack_a[*i]);
	return (temp);
}

long	*bubble_sort(long *temp, int len)
{
	int	i;
	int	j;
	int	swap;
	int	flag;

	i = 0;
	while (i++ < len - 1)
	{
		j = 0;
		flag = 0;
		while (j < len - i)
		{
			if (temp[j] > temp[j + 1])
			{
				swap = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = swap;
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			break ;
	}
	return (temp);
}

long	*array_iteration(long *temp, long *final_array, int len)
{
	int		i;
	int		j;
	long	*result;

	result = (long *)malloc (len * sizeof(long));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (final_array[i] != temp[j])
			j++;
		result[i] = j;
		i++;
	}
	return (result);
}
