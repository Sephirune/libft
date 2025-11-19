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
