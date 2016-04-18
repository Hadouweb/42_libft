#include "libft.h"

int		ft_size_wchar(wchar_t w)
{
	if (w < 128)
		return (1);
	else if (w < 2048)
		return (2);
	else if (w < 65535)
		return (3);
	else if (w < 1114111)
		return (4);
	return (0);
}