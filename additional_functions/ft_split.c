#include "libft.h"

static int	count_words(char const *s, char c)
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
			in_word = 1;
		s++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
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
		free(arr[j]);
		j++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;
	int		i;
	int		len;

	words = count_words(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
		{
			len = word_len(s, c);
			arr[i] = ft_substr(s, 0, len);
			if (!arr[i])
			{
				return (free_all(arr, i), NULL);
			}
			i++;
			s += len;
		}
	}
	arr[i] = NULL;
	return (arr);
}
