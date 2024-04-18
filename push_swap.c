/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:44:48 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/18 16:40:55 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(long *a, int len);
char	**create_array(char **argv, int argc, int *len, int *i);
void	create_structs(long *final_array, int len);
long	*bubble_sort(long *temp, int len);
long	*array_iteration(long *temp, long *final_array, int len);
void	print_stack(t_stack *stack);

int	main(int argc, char **argv)
{
	char	**stack_a;
	int		i;
	long	*temp;
	long	*final_array;
	int		len;

	stack_a = create_array(argv, argc, &len, &i);
	if (check_digits(stack_a, len))
	{
		write(1, "Error\n", 6);
		free(stack_a);
		return (0);
	}
	temp = char_to_long(stack_a, len);
	final_array = ft_longdup(temp, len);
	if (check_duplicate(final_array, len) || check_max(final_array, len))
	{
		free(temp);
		free(final_array);
		return (0);
	}
	temp = bubble_sort(temp, len);
	final_array = array_iteration(temp, final_array, len);
	create_structs(final_array, len);
	return (0);
}

char	**create_array(char **argv, int argc, int *len, int *i)
{
	char	**stack_a;
	int		size;

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
	size = *i;
	*len = size;
	return (stack_a);
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
