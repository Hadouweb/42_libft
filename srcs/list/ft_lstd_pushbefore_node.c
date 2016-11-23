/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_pushbefore_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 10:03:32 by nle-bret          #+#    #+#             */
/*   Updated: 2016/10/25 10:03:37 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstd_pushbefore_node(t_listd_info **lst,
	t_listd *node, t_listd *new_node)
{
	t_listd *n_prev;

	if (node->prev != NULL)
	{
		n_prev = node->prev;
		n_prev->next = new_node;
		new_node->next = node;
		node->prev = new_node;
		new_node->prev = n_prev;
	}
	else
	{
		new_node->next = node;
		node->prev = new_node;
		(*lst)->beg = new_node;
	}
}
