/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:08 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 05:00:14 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **list, t_link *link)
{
	if (link == NULL)
		return ;
	if (*list == NULL)
		ft_list_init(list, link);
	else
	{
		(*list)->tail->next = link;
		link->prev = (*list)->tail;
		(*list)->tail = link;
		(*list)->size++;
	}
}
