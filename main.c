#include "libft.h"
#include <stdio.h>

typedef struct  s_data
{
	char		*string;
	int			x;
	int			z;
}				t_data;

t_data	*ft_create_data(char *str, int x, int z)
{
	t_data	*d;

	if ((d = (t_data*)ft_memalloc(sizeof(t_data))) == NULL)
		return (NULL);
	d->string = ft_strdup(str);
	d->x = x;
	d->z = z;
	return (d);
}

void	ft_print_data(void *ptr)
{
	t_data	*d;

	d = (t_data*)ptr;
	ft_putstr(d->string);
	ft_putchar(' ');
	ft_putnbr(d->x);
	ft_putchar(' ');
	ft_putnbr(d->z);
}

int		main(int ac, char **av)
{
	int		i;
	t_list	*lst;
	t_data	*tmp;

	lst = NULL;
	i = 1;
	tmp = NULL;
	if (ac > 1)
	{
		while (av[i])
		{
			tmp = ft_create_data(av[i], 10, i);
			ft_lstpush_front(&lst, tmp, sizeof(t_data));
			ft_memdel((void*)&tmp);
			i++;
		}
		tmp = ft_create_data("aasd;lasdajd", 1, 223432423);
		ft_lstadd(&lst, ft_lstnew(tmp, sizeof(t_data)));
		ft_memdel((void*)&tmp);
		ft_lstprint(lst, ft_print_data);
	}
	//sleep(2);
	return (0);
}