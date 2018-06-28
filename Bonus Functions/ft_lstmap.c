/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 00:29:22 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/28 01:39:09 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*l;

	if (!lst)
		return (NULL);
	l = f(lst);
	new = l;
	while (lst->next)
	{
		lst = lst->next;
		l->next = f(lst);
		if (!l->next)
		{
			free(l->next);
			return (NULL);
		}
		l = l->next;
	}
	return (new);
}
