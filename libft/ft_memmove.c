/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:14:40 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 13:51:35 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destiny;
	unsigned const char	*source;

	i = 0;
	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (destiny > source)
	{
		i = n;
		while (i--)
			destiny[i] = source[i];
	}
	else
	{
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char src1[] = "no me quiero solapar";
	char dst1[30];
	char src2[] = "se solapan";
	char *dst2 = src2 + 3;
	printf("copia normal\n");
	ft_memmove(dst1, src1, 21);
	printf("ft_memmove: %s\n", dst1);
	memmove(dst1, src1, 21);
	printf("memmove: %s\n\n", dst1);
	printf("solapamiento\n");
	printf("antes: %s\n", src2);
	ft_memmove(dst2, src2, 8);
	printf("despues de ft_memmove: %s\n", src2);
	return (0);
} */
