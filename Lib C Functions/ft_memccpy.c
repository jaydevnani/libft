/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:10:24 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 02:31:40 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	char			*dptr;
	unsigned char	*sptr;

	i = 0;
	dptr = dest;
	sptr = (unsigned char *)src;
	while (i < n)
	{
		*(dptr + i) = *(sptr + i);
		if (*(sptr + i) == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
