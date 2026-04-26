/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprifti <mprifti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 09:28:15 by mprifti           #+#    #+#             */
/*   Updated: 2026/04/23 09:28:16 by mprifti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 1;
	while (*s)
	{
		if (*s != c)
		{
			if (in_word == 1)
			{
				count++;
				in_word = 0;
			}
		}
		else
		{
			in_word = 1;
		}
		s++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_all(char **arr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(arr[i]);
		j++;
	}
	free(arr);
}

static char	**fill_arr(char **arr, const char *s, char c, int words)
{
	int	i;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		arr[i] = ft_substr(s, 0, len);
		if (!arr[i])
		{
			free_all(arr, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	return (fill_arr(arr, s, c, words));
}
