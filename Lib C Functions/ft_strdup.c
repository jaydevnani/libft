/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 22:02:04 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/20 11:31:31 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		s;
	char	*dest;

	i = 0;
	s = 0;
	while (src[s])
		s++;
	dest = (char*)malloc(sizeof(char) * (s + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
