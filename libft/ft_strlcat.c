/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:19:23 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 11:23:43 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destiny;
	size_t	tlen;
	size_t	source;

	i = 0;
	tlen = 0;
	destiny = ft_strlen(dst);
	source = ft_strlen(src);
	if (destiny < size)
		tlen = destiny + source;
	else
		tlen = source + size;
	while (src[i] && (destiny + 1) < size)
	{
		dst[destiny] = src[i];
		i++;
		destiny++;
	}
	dst[destiny] = '\0';
	return (tlen);
}

/*#include <stdio.h>
int	main(void)
{
	char src[] = "aBadRomance";
	char dest[] = "Caughtin";
	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
}*/
