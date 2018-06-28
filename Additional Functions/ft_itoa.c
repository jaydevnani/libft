/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 00:35:21 by jdevnani          #+#    #+#             */
/*   Updated: 2018/06/27 20:40:29 by jdevnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	n1;

	n1 = n;
	if (n == 0 || n == -2147483648)
		return ((n == 0) ? ft_strdup("0") : ft_strdup("-2147483648"));
	len = ft_nodigits(n);
	str = ft_strnew(ft_nodigits(n));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n1 = n * -1;
	}
	while (n1 > 0)
	{
		str[--len] = n1 % 10 + '0';
		n1 /= 10;
	}
	return (str);
}
