#include "libft.h"

int		ft_intlen(int value)
{
	int		i;

	i = 0;
	if (value < 0)
		i++;
	if (value == 0)
		i++;
	while (value)
	{
		value /= 10;
		i++;
	}
	return (i);
}