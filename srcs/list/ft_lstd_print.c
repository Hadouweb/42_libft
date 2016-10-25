/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:53:24 by nle-bret          #+#    #+#             */
/*   Updated: 2016/10/25 08:53:26 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_lstd_print_link(t_listd *node, void (*print)(void *))
{
	if (print)
	{
		ft_putstr("\t\033[036mprev:\033[0m[");
		if (node->prev != NULL)
			(*print)(node->prev->content);
		else
			ft_putstr("NULL");
		ft_putstr("]");
	}
	if (print)
	{
		ft_putstr("\t\033[032mnext:\033[0m[");
		if (node->next != NULL)
			(*print)(node->next->content);
		else
			ft_putstr("NULL");
		ft_putstr("]");
	}
}

void			ft_lstd_print(t_listd *lst, void (*print)(void *),
	int print_link)
{
	while (lst)
	{
		ft_putstr("\033[033mcontent : \033[0m[");
		if (print)
			(*print)(lst->content);
		else
			ft_putstr(lst->content);
		ft_putstr("]\t\033[035msize : \033[0m[");
		ft_putnbr(lst->content_size);
		ft_putstr("] ");
		if (print_link)
			ft_lstd_print_link(lst, print);
		ft_putstr("\n");
		lst = lst->next;
	}
}
