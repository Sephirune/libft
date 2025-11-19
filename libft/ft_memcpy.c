/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:29:15 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 13:35:58 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	const unsigned char	*source;
	size_t				i;

	if (!n || dest == src)
		return (dest);
	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
}

/*#include <stdio.h>
int main(void)
{
	unsigned char dest[] = "hola";
	unsigned char src[] = "adios";
	ft_memcpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}*/
