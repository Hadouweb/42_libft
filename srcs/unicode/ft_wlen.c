#include "libft.h"

size_t	ft_wlen(wchar_t *wstr)
{
	size_t i;

	i = 0;
	if (*wstr == 0)
		return (0);
	while (wstr[i])
		i++;
	return (i);
}