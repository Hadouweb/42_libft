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

t_tree	*ft_tree_add(t_tree *ref_node, enum e_tree edge, const void *content,
	size_t content_size)
{
	t_tree	*new_node;

	new_node = ft_tree_new(content, content_size);
	if (!new_node)
		return (NULL);
	if (edge == TREE_LEFT)
		ref_node->left = new_node;
	else if (edge == TREE_RIGHT)
		ref_node->right = new_node;
	return (new_node);
}
