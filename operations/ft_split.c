/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:33:06 by eperperi          #+#    #+#             */
/*   Updated: 2024/04/18 17:08:47 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		counter(char const *s, char c);
char	*get_string(char const *s, int i, int len);
char	**calc(char **res, const char *s, char c, int i);

char	**ft_split(char const *s, char c, int *i)
{
	char	**res;

	if (!s)
	{
		res = malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	if (s[0] == '\0' && c == '\0')
	{
		res = malloc(1);
		res[0] = NULL;
		return (res);
	}
	*i = counter(s, c);
	res = malloc (((*i) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res = calc(res, s, c, 0);
	return (res);
}

char	**calc(char **res, const char *s, char c, int i)
{
	int	k;
	int	j;

	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		res[k] = get_string(s, i, j);
		if (!res[k])
		{
			while (--k >= 0)
				free(res[k]);
			return (free(res), NULL);
		}
		k++;
		i += j;
	}
	return (res[k] = NULL, res);
}

int	counter(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			return (counter + 1);
		if (s[i + 1] != c)
			counter++;
		i++;
	}
	return (counter);
}

char	*get_string(char const *s, int i, int len)
{
	char	*res;
	int		j;

	j = 0;
	res = (char *)malloc ((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (j < len)
	{
		res[j] = s[i + j];
		j++;
	}
	res[j] = '\0';
	return (res);
}
