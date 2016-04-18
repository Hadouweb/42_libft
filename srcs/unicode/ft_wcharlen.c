#include "libft.h"

int		ft_wcharlen(wchar_t *w)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (w[i])
	{
		i++;
		count += ft_size_wchar(w[i]);
	}
	return (count);
}