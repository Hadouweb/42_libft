/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_preorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 04:56:16 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/09 04:56:19 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_preorder(t_tree *node, void (*f)(void *node))
{
	if (node == NULL)
		return ;
	(*f)(node);
	ft_tree_preorder(node->left, f);
	ft_tree_preorder(node->right, f);
}
