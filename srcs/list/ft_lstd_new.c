/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:28:15 by nle-bret          #+#    #+#             */
/*   Updated: 2015/11/25 03:45:45 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_listd	*ft_lstd_new_alloc(void const *content, size_t content_size)
{
	t_listd	*list;

	if ((list = (t_listd*)ft_memalloc(sizeof(t_listd))) == NULL)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if ((list->content = ft_memalloc(content_size)) == NULL)
		{
			free(list);
			return (NULL);
		}
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	list->prev = NULL;
	return (list);
}

t_listd	*ft_lstd_new(void *content, size_t content_size)
{
	t_listd	*list;

	if ((list = (t_listd*)ft_memalloc(sizeof(t_listd))) == NULL)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = content;
		list->content_size = content_size;
	}
	list->next = NULL;
	list->prev = NULL;
	return (list);
}
