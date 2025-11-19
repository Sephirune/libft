/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:20:47 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/10 15:23:00 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	str;

	str = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == str)
			return ((char *)s + i);
		i++;
	}
	if (str == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c);

int main(void)
{
    const char *str = "why are we here, just to suffer";
    printf("el original: %s\n", strchr(str, 'j'));
    printf("el mio: %s\n\n", ft_strchr(str, 'j'));
} */