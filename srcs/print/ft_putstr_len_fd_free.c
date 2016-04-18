#include "libft.h"

int		ft_putstr_len_fd_free(char **str, int fd)
{
	size_t	size;

	if (*str && **str)
	{
		size = ft_strlen(*str);
		write(fd, *str, size);
		return (size);
	}
	ft_strdel(str);
	return (0);
}