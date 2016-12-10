/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 04:56:01 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/09 04:56:02 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tree	*ft_tree_new_alloc(const void *content, size_t content_size)
{
	t_tree	*node;

	if ((node = (t_tree*)ft_memalloc(sizeof(t_tree))) == NULL)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if ((node->content = ft_memalloc(content_size)) == NULL)
		{
			free(node);
			return (NULL);
		}
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->left = NULL;
	node->right = NULL;
	node->depth = 0;
	node->parent = NULL;
	return (node);
}

t_tree	*ft_tree_new(void *content, size_t content_size)
{
	t_tree	*node;

	if ((node = (t_tree*)ft_memalloc(sizeof(t_tree))) == NULL)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = content;
		node->content_size = content_size;
	}
	node->left = NULL;
	node->right = NULL;
	node->depth = 0;
	node->parent = NULL;
	return (node);
}
