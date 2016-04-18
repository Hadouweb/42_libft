/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 03:01:18 by nle-bret          #+#    #+#             */
/*   Updated: 2015/11/24 03:01:40 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_str_tolower(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	ret = ft_strdup(str);
	while (ret[i])
	{
		ret[i] = ft_tolower(ret[i]);
		i++;
	}
	return (ret);
}
