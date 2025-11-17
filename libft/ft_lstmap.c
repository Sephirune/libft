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

	if (!lst || !f)
		return (NULL);
	map = NULL;
	while (lst)
	{
		helpy = ft_lstnew(f(lst->content));
		if (!helpy)
		{
			ft_lstclear(&map, del);
			ft_lstclear(&helpy, del);
			return (NULL);
		}
		ft_lstadd_back(&map, helpy);
		lst = lst->next;
	}
	return (map);
}
