/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:48:59 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 11:53:26 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	dest = malloc((j + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char src[] = "holaaaaa";
	char srcmio[] = "holaaaa";
	printf("el strdup original hace: %s\n", strdup(src));
	printf("el mio hace: %s\n", strdup(srcmio));
	return(0);
} */