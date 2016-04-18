/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 10:56:42 by nle-bret          #+#    #+#             */
/*   Updated: 2016/04/18 10:56:43 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lllen_base(long long value, int base)
{
	int		i;

	i = 0;
	if (value < 0 && base == 10)
		i++;
	if (value == 0)
		i++;
	while (value)
	{
		value /= base;
		i++;
	}
	return (i);
}

char		*ft_lltoa_base(long long value, int base)
{
	char	*str;
	int		size;
	int		sign;

	size = ft_lllen_base(value, base);
	if ((str = (char *)ft_memalloc(size + 1)) == NULL)
		return (NULL);
	sign = (value < 0) ? -1 : 1;
	str[size--] = '\0';
	if (value < 0 && base == 10)
		str[0] = '-';
	if (value == 0)
		str[0] = '0';
	while (value)
	{
		str[size] = value % base * sign;
		if (str[size] >= 10)
			str[size] += 7;
		str[size] += '0';
		value /= base;
		size--;
	}
	return (str);
}
