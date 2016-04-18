#include "libft.h"

int		ft_putchar_len_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}