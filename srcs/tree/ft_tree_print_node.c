/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_print_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 04:56:23 by nle-bret          #+#    #+#             */
/*   Updated: 2016/12/09 04:56:25 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_print_node(t_tree *node)
{
	ft_putstr("\033[033mcontent : \033[0m[");
	ft_putstr((char*)node->content);
	ft_putstr("]\t\033[035msize : \033[0m[");
	ft_putnbr(node->content_size);
	ft_putstr("]\n");
}
