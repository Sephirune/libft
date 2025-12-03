/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:24:06 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/26 05:57:22 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_strdup(s);
	if (!s || !f)
		return (NULL);
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*char	ft_touppper(unsigned int i, char str)
{
	(void)i;
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "hola";
	char *funcion = ft_strmapi(str, ft_touppper);
	printf("%s\n", funcion);
	free(funcion);
}*/
