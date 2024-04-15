/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:35:11 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/15 22:10:57 by eperperi         ###   ########.fr       */
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

void	fill_stack_b(t_stack *stack, long *final_array);
long	*char_to_long(char **stack_a, int len);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	fill_stack(t_stack *stack, long *final_array);
t_stack	*generate_stack(size_t capacity);
char	**ft_split(char const *s, char c, int *i);
void	print(long *a, int len);
int		counter(char const *s, char c);
char	*get_string(char const *s, int i, int len);
char	**calc(char **res, const char *s, char c, int i);
long	ft_atol(char *str);
long	*ft_longdup(long *s1, int len);
char	**create_array(char **argv, int argc, int *len, int *i);
long	*bubble_sort(long *temp, int len);
long	*array_iteration(long *temp, long *final_array, int len);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
int		check_duplicate(long *final_array, int len);
int		check_max(long *final_array, int len);
int		check_digits(char **stack_a, int len);

#endif