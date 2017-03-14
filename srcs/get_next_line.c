/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 02:26:47 by nle-bret          #+#    #+#             */
/*   Updated: 2015/12/09 05:36:10 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_buff_fd	*ft_make_buff_fd(int fd_num)
{
	t_buff_fd		*buff;

	if ((buff = (t_buff_fd *)ft_memalloc(sizeof(t_buff_fd))) == NULL)
		return (NULL);
	buff->rest = ft_strnew(1);
	buff->fd_num = fd_num;
	return (buff);
}

static int			ft_concat(t_buff_fd **bf, char *buf, char **line, int find)
{
	char	*eol;
	char	*tmp;

	if ((eol = ft_strchr(buf, '\n')) != NULL && eol++)
	{
		if ((*bf)->rest && ft_strchr((*bf)->rest, '\n') == NULL)
			*line = ft_strjoin_free((*bf)->rest, ft_strcpy_limit(buf, '\n'), 3);
		else if ((find = 1))
			*line = ft_strcpy_limit(buf, '\n');
		tmp = (*bf)->rest;
		(*bf)->rest = ft_strdup(eol);
		if (find)
			ft_strdel(&tmp);
		return (1);
	}
	else
	{
		tmp = (*bf)->rest;
		if ((*bf)->rest)
			(*bf)->rest = ft_strjoin((*bf)->rest, buf);
		else
			(*bf)->rest = ft_strdup(buf);
		ft_strdel(&tmp);
	}
	return (0);
}

static t_buff_fd	*ft_get_buff_fd(t_list **list, int fd)
{
	t_link		*l;
	t_buff_fd	*new_fd;

	if (*list == NULL)
	{
		new_fd = ft_make_buff_fd(fd);
		ft_list_push_back(*list, &new_fd->link);
		return (new_fd);
	}
	l = (*list)->head;
	while (l && ((t_buff_fd*)l)->fd_num != fd)
		l = l->next;
	if (l == NULL)
	{
		new_fd = ft_make_buff_fd(fd);
		ft_list_push_back(*list, &new_fd->link);
		return (new_fd);
	}
	return ((t_buff_fd*)l);
}

static int			ft_verif_last_line(t_buff_fd *bf, char **line, int ret)
{
	if (ret != -1 && bf->rest && (*line = ft_strdup(bf->rest)) != NULL)
	{
		if (bf->rest && ft_strlen(bf->rest))
			ret = 1;
		else
			ret = 0;
		ft_strdel(&bf->rest);
	}
	return (ret);
}

int					get_next_line(int const fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	int					ret;
	t_buff_fd			*bf;
	static t_list		*list = NULL;

	bf = ft_get_buff_fd(&list, fd);
	if (bf && bf->rest && ft_strchr(bf->rest, '\n'))
	{
		ft_concat(&bf, bf->rest, line, 0);
		return (1);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (ft_concat(&bf, buf, line, 0))
			return (1);
	}
	return (ft_verif_last_line(bf, line, ret));
}
