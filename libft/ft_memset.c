/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:45:50 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 13:05:22 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "Hola que tal";
    char str2[] = "Hola que tal";
    printf("antes:\n");
    printf("original: %s\n", str1);
    printf("mio: %s\n\n", str2);
    memset(str1, '@', 5);
    ft_memset(str2, '@', 5);
    printf("despues del memset:\n");
    printf("original: %s\n", str1);
    printf("mio: %s\n", str2);
    return 0;
} */