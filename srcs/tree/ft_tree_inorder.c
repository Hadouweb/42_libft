/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_inorder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 04:55:55 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/09 04:55:56 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_inorder(t_tree *node, void (*f)(void *node))
{
	if (node == NULL)
		return ;
	ft_tree_inorder(node->left, f);
	(*f)(node);
	ft_tree_inorder(node->right, f);
}
