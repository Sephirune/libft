/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:55:10 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/12 17:05:01 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*helpy;
	void	*str;

	map = NULL;
	str = NULL;
	while (lst)
	{
		str = f(lst->content);
		if (!str)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		helpy = ft_lstnew(str);
		if (!helpy)
		{
			ft_lstclear(&map, del);
			free (str);
			return (NULL);
		}
		ft_lstadd_back(&map, helpy);
		lst = lst->next;
	}
	return (map);
}

/*#include <stdio.h>
void *to_upper(void *c)
{
	char *s = (char *)c;
	char *new = ft_strdup(s);
	int i = 0;
	while (new[i])
	{
		new[i] = ft_toupper(new[i]);
		i++;
	}
	return (new);
}
void	dele(void *c)
{
	free(c);
}

int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("everything in it's right place"));
	t_list *aux = ft_lstmap(lst, to_upper, dele);
	
	printf("OG: %s\n", (char *)lst->content);
	printf("mio: %s\n", (char *)aux->content);
	
	dele(lst->content);
	free(lst);
	dele(aux->content);
	free(aux);
	return (0);
}*/
