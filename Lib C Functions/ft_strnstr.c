/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 23:39:01 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 15:27:20 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + k] == needle[j] && (i + k) < len)
		{
			if (j == ft_strlen(needle) - 1)
				return ((char *)haystack + i);
			k++;
			j++;
		}
		i++;
		j = 0;
		k = 0;
	}
	return (NULL);
}
