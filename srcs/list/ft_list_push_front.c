/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 05:00:24 by nle-bret          #+#    #+#             */
/*   Updated: 2017/03/25 02:10:01 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list *list, t_link *link)
{
	if (link == NULL)
		return ;
	if (list->tail == NULL)
	{
		list->head = link;
		list->tail = link;
		list->size++;
		return ;
	}
	list->head->prev = link;
	link->next = list->head;
	list->head = link;
	list->size++;
}
