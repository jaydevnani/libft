/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 23:10:45 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 02:12:11 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (haystack[i + k] == needle[j])
		{
			if (j == (int)ft_strlen(needle) - 1)
				return ((char *)haystack + i);
			j++;
			k++;
		}
		i++;
		j = 0;
		k = 0;
	}
	return (NULL);
}
