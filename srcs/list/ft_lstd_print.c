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

void			ft_lstd_print(t_listd_info *lst, void (*print)(void *),
	int print_link)
{
	t_listd		*l;

	if (lst == NULL)
		return ;
	l = lst->beg;
	while (l)
	{
		if (l == lst->beg)
			ft_putstr("\e[38;5;76mcontent : \033[0m[");
		else if (l == lst->end)
			ft_putstr("\e[38;5;226mcontent : \033[0m[");
		else
			ft_putstr("\e[38;5;208mcontent : \033[0m[");
		if (print)
			(*print)(l->content);
		else
			ft_putstr(l->content);
		ft_putstr("]\t\e[38;5;87msize : \033[0m[");
		ft_putnbr(l->content_size);
		ft_putstr("] ");
		if (print_link)
			ft_lstd_print_link(l, print);
		ft_putstr("\n");
		l = l->next;
	}
}
