/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushafter_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:52:48 by nle-bret          #+#    #+#             */
/*   Updated: 2016/10/25 08:52:53 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushafter_node(t_list *prev_node, t_list *node)
{
	t_list *n;

	if (prev_node->next != NULL)
	{
		n = prev_node->next;
		prev_node->next = node;
		node->next = n;
	}
}
