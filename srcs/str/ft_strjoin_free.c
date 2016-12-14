/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_s1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 04:22:21 by nle-bret          #+#    #+#             */
/*   Updated: 2016/03/13 04:22:23 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_str(char **s1, char **s2, int free_token)
{
	if (free_token == 1)
		ft_strdel(s1);
	else if (free_token == 2)
		ft_strdel(s2);
	else if (free_token == 3)
	{
		ft_strdel(s1);
		ft_strdel(s2);
	}
}

char			*ft_strjoin_free(char *s1, char *s2, int free_token)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if ((str = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free_str(&s1, &s2, free_token);
	return (str);
}
