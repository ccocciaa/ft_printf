/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:10:03 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:33:29 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelement;

	newlist = NULL;
	while (lst != NULL)
	{
		newelement = ft_lstnew(f(lst->content));
		if (!newelement)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newelement);
		lst = lst->next;
	}
	return (newlist);
}
