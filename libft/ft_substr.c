/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:24:09 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/11 09:39:38 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	tlen;
	size_t	i;

	i = 0;
	tlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= tlen)
		return (ft_strdup(""));
	if (len > tlen - start)
		len = tlen - start;
	substr = malloc(((len) + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* #include <stdio.h>
int main()
{
	char str[] = "you know where";
	char *substr;
	char *substr2;
	char *substr3;
	substr = ft_substr(str, 4, 12);
	substr2 = ft_substr(str, 1, 5);
	substr3 = ft_substr(str, 26, 3);
	printf("%s\n", substr);
	printf("%s\n", substr2);
	printf("%s\n", substr3);
	return (0);
} */
