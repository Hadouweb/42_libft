/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_info_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 02:01:46 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/15 02:01:48 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tree_info_node(t_tree *tree, char *str)
{
	t_tree		*parent;

	parent = tree->parent;
	if (tree == NULL)
		return ;
	ft_putstr("\033[032m----------------------\n");
	ft_putstr("|depth  : \t");
	ft_putnbr(tree->depth);
	ft_putstr("\n");
	if (parent)
	{
		ft_putstr("|parent : \t");
		if (str)
			ft_putstr(str);
		else
			ft_putnbr(parent->depth);
		ft_putstr("\n");
		if (parent->left == tree)
			ft_putendl("|\t\tLEFT");
		else
			ft_putendl("|\t\tRIGHT");
	}
	else
		ft_putendl("|\t\tROOT");
	ft_putstr("----------------------\n\033[0m");
}
