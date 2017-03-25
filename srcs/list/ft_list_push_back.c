/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:08 by nle-bret          #+#    #+#             */
/*   Updated: 2017/03/25 02:10:02 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list *list, t_link *link)
{
	if (link == NULL || list == NULL)
		return ;
	if (list->head == NULL)
	{
		list->head = link;
		list->tail = link;
		list->size++;
		return ;
	}
	list->tail->next = link;
	link->prev = list->tail;
	list->tail = link;
	list->size++;
}
