/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:33:34 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 19:53:42 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	str = (char**)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str)
		return (NULL);
	i = -1;
	k = 0;
	while (++i < ft_countwords(s, c) && (j = 0) != 1)
	{
		str[i] = ft_strnew(ft_wordlen(&s[k], c) + 1);
		if (!str[i])
			return (NULL);
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			str[i][j++] = s[k++];
		str[i][j] = '\0';
	}
	str[i] = 0;
	return (str);
}
