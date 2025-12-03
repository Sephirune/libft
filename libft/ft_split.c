/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:27:58 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/26 03:54:04 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	i;
	size_t	in_word;
	size_t	counter;

	i = 0;
	counter = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (!in_word)
			{
				in_word = 1;
				counter++;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (counter);
}

static void	*maximum_free(char **strings, int k)
{
	int	i;

	i = 0;
	while (k > 0)
	{
		free(strings[k - 1]);
		k--;
	}
	free(strings);
	return (NULL);
}

static int	get_word(char **strings, char const *s, int j, int i)
{
	char	*word;

	word = ft_substr(s, j, i - j);
	if (!word)
		return (-1);
	*strings = word;
	return (0);
}

static void	parse_words(int *i, int *j, char c, const char *s)
{
	while (s[*i] == c)
		(*i)++;
	*j = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strings = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (s[i])
	{
		parse_words(&i, &j, c, s);
		if (j != i)
		{
			if (get_word(&strings[k], s, j, i) == -1)
				return (maximum_free(strings, k));
			k++;
		}
	}
	strings[k] = NULL;
	return (strings);
}

/*#include <stdio.h>
int main(void)
{
	char const s[] = "my loneliness is killing me";
	char **a = ft_split(s, ' ');
	for (int i = 0; i < 5; i++)
		printf("%s\n", a[i]);
}*/
