/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:58:56 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 14:21:59 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sptr;
	size_t		i;

	i = 0;
	sptr = (const char *)s;
	while (i < n)
	{
		if (*(sptr + i) == (char)c)
			return ((void *)sptr + i);
		i++;
	}
	return (NULL);
}
