/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:10:24 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/19 16:49:22 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dptr;
	char	*sptr;

	i = 0;
	dptr = dest;
	sptr = (unsigned char *)src;
	while (i < n)
	{
		*(dptr + i) = *(sptr + i);
		if (*(sptr + i) == (unsigned char)c)
			return (dest + i + 1);
	}
	return (NULL);
}
