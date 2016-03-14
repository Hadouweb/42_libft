#include "libft.h"
#include <stdio.h>

typedef struct 	s_pos
{
	int			a;
	int			b;
}				t_pos;

typedef struct  s_data
{
	char		*string;
	int			x;
	int			z;
	t_pos		p;
}				t_data;

t_data	ft_create_data(char *str, int x, int z)
{
	t_data	d;

	d.string = ft_strdup(str);
	d.x = x;
	d.z = z;
	d.p.a = 10;
	d.p.b = z;
	return (d);
}

void	ft_print_data(void *ptr)
{
	t_data	*d;

	d = (t_data*)ptr;
	ft_putstr(" z_");
	ft_putnbr(d->z);
	ft_putchar(' ');
	ft_putnbr(d->x);
	ft_putchar(' ');
	ft_putnbr(d->p.a);
	ft_putchar(' ');
	ft_putnbr(d->p.b);
	ft_putchar(' ');
	ft_putstr(d->string);
}

void	ft_del_content(void *content, size_t content_size)
{
	t_data	*d;

	d = (t_data*)content;
	free(d->string);
	d->string = NULL;
	ft_memset(content, 0, content_size);
	free(content);
	content = NULL;
}

void	ft_replace_z(t_list *elem)
{
	t_data	*d;

	d = (t_data*)elem->content;
	d->string[0] = '@';
}

t_list	*ft_add_replace(t_list *node)
{
	t_data	*d;
	t_data	new_d;

	d = (t_data*)node->content;
	new_d = ft_create_data("_lol", d->x, d->z);
	node->content = &new_d;
	return (node);
}

void	ft_put_void(void *content)
{
	char	*str;

	str = (char*)content;
	write(1, str, ft_strlen(str));
}

int		main(int ac, char **av)
{
	int		i;
	t_list	*lst;
	t_list	*tmp_lst;
	t_data	tmp;

	lst = NULL;
	i = 1;
	tmp_lst = NULL;
	if (ac > 1)
	{
		while (av[i])
		{
			tmp = ft_create_data(av[i], 10, i);
			ft_lstpush_back(&lst, &tmp, sizeof(t_data));
			i++;
		}
	}
	ft_lstdel(&lst, ft_del_content);
	tmp_lst = ft_lstsplit(ft_strdup(av[1]), ' ');
	ft_lstprint(tmp_lst, ft_put_void);
	sleep(2);
	return (0);
}