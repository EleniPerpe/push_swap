/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:35:11 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/14 20:07:42 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <unistd.h>

typedef struct stack {
	long	*stack;
	size_t	size;
	size_t	capacity;
}	t_stack;

void	*ft_memmove(void *dest, const void *src, size_t n);
void	fill_stack(t_stack *stack, long *final_array);
void	pb(t_stack *a, t_stack *b);
t_stack	*generate_stack(size_t capacity);
void	add_to_stack(t_stack *stack, long number);
size_t	get_size(t_stack *stack);
char	**ft_split(char const *s, char c, int *i);
void	print(long *a, int len);
int		counter(char const *s, char c);
char	*get_string(char const *s, int i, int len);
char	**calc(char **res, const char *s, char c, int i);
long	ft_atol(char *str);
long	*ft_strdup(long *s1, int len);
long	*create_stack(char **argv, int argc, int *len, int *i);
long	*bubble_sort(long *temp, int len);
long	*index_play(long *temp, int len);
long	*array_iteration(long *temp, long *final_array, int len);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t a);
void	sa(long *a, int len);
void	sb(long *b, int len);
void	ss(long *b, long *a, int len);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(long *a, int len);
void	rrb(long *b, int len);
void	rrr(long *a, long *b, int len);
int		pa(long *a, long *b, int nums_b, int len);

#endif