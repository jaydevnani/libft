/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:38:51 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/21 16:16:10 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dptr;
	char	*sptr;
	int		i;

	i = 0;
	*dptr = (char *)dest;
	*sptr = (char *)src;
	if (sptr < dptr)
		while (len >= 0)
		{
			*(dptr + len) = *(sptr + len);
			len--;
		}
	else
		while (i < len)
		{
			*(dptr + i) = *(sptr + i);
			i++;
		}
	return (dest);
}
