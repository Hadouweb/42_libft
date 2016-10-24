/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 16:02:53 by nle-bret          #+#    #+#             */
/*   Updated: 2016/10/22 16:02:55 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd_char(char **s, char c)
{
	int		len;
	char	*str;

	len = ft_strlen(*s);
	str = (char *)malloc(len + 1 * sizeof(char) + 1);
	ft_strcpy(str, *s);
	str[len++] = c;
	str[len] = '\0';
	return (str);
}
