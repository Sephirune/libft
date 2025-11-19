/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:13:03 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 11:18:55 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <stdio.h>
int	main(void)
{
	char	dest[] = "1234555";
	char	src[] = "4567888";

	printf("el original es: %s\n", dest);
	ft_strlcpy(dest, src, 8);
	printf("ahora la copia es: %s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 5));
	return (0);
} */
