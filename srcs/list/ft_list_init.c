/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 04:59:55 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/13 04:59:56 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_init(t_list **list, t_link *link)
{
	*list = (t_list*)ft_memalloc(sizeof(t_list));
	if (*list == NULL)
		return ;
	(*list)->head = link;
	(*list)->tail = link;
	(*list)->size++;
}
