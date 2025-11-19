/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:56:46 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/13 09:58:49 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	if (!n)
		return (NULL);
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (const unsigned char) c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	const char str[] = "far from heaven";
	char s1 = 'm';
	char s2 = 'ñ';
	char s3 = '\0';
	size_t n = strlen(str) + 1;
	printf("busco s1 original '%c': %s\n", s1, (char *)memchr(str, s1, n));
	printf("busco s1 mio '%c\n': %s\n", s1, (char *)ft_memchr(str, s1, n));
	printf("buscar algo que no existe org '%c\n': %p\n", s2, memchr(str, s2, n));
	printf("buscar algo que no existe mio '%c\n': %p\n", s2, memchr(str, s2, n));
	printf("buscar nulo original '%c\n': %p\n", s3, memchr(str, s3, n));
	printf("buscar nulo mio '%c\n': %p\n", s3, ft_memchr(str, s3, n));
	printf("buscar con tamaño original '%c\n': %p\n", 11, memchr(str, s3, 7));
	printf("buscar con tamaño mio '%c\n': %p\n", s1, ft_memchr(str, s1, 7));
	return (0);
}*/
