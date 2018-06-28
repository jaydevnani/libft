/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:27:07 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 02:04:44 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dptr;
	char	*sptr;

	i = 0;
	dptr = dest;
	sptr = (char *)src;
	while (i < n)
	{
		*(dptr + i) = *(sptr + i);
		i++;
	}
	return (dest);
}
