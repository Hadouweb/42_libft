/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 10:48:25 by nle-bret          #+#    #+#             */
/*   Updated: 2016/04/18 10:48:38 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ulllen_base(unsigned long long value, int base)
{
	int		i;

	i = 0;
	if (value == 0)
		i++;
	while (value)
	{
		value /= base;
		i++;
	}
	return (i);
}

char		*ft_ulltoa_base(unsigned long long value, int base)
{
	char	*str;
	int		size;

	size = ft_ulllen_base(value, base);
	if ((str = (char *)ft_memalloc(size + 1)) == NULL)
		return (NULL);
	str[size--] = '\0';
	if (value == 0)
		str[0] = '0';
	while (value)
	{
		str[size] = value % base;
		if (str[size] >= 10)
			str[size] += 7;
		str[size] += '0';
		value /= base;
		size--;
	}
	return (str);
}
