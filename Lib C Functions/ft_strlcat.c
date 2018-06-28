/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 20:06:20 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 15:07:50 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	int		j;
	size_t	dlen;
	size_t	slen;

	i = ft_strlen(dest);
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dsize < dlen + 1)
		return (dsize + slen);
	else if (dsize > dlen + 1)
	{
		while (i < dsize - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dlen + slen);
}
