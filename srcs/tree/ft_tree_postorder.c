/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_postorder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 04:56:09 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/09 04:56:10 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_postorder(t_tree *node, void (*f)(t_tree *node))
{
	if (node == NULL)
		return ;
	ft_tree_postorder(node->left, f);
	ft_tree_postorder(node->right, f);
	(*f)(node);
}
