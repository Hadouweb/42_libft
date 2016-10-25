/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:33:01 by nle-bret          #+#    #+#             */
/*   Updated: 2015/11/25 04:38:53 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstd_pushback(t_listd **l, void const *c, size_t s)
{
	t_listd	*list;

	list = *l;
	if (list)
	{
		while (list->next)
		{
			list = list->next;
		}
		list->next = ft_lstd_new(c, s);
		list->next->prev = list;
	}
	else
		*l = ft_lstd_new(c, s);
}
