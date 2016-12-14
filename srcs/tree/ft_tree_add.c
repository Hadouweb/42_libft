/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 04:55:49 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/09 04:55:51 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tree		*ft_tree_add(t_tree *ref_node, enum e_tree edge, t_tree *node)
{
	if (ref_node == node)
		return (NULL);
	if (node == NULL || ref_node == NULL)
		return (NULL);
	node->depth = ref_node->depth + 1;
	node->parent = ref_node;
	if (edge == TREE_LEFT)
		ref_node->left = node;
	else if (edge == TREE_RIGHT)
		ref_node->right = node;
	return (node);
}
