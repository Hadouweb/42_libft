#include "libft.h"

char	*ft_wconvert_str(char *str, wchar_t *wstr)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (wstr[i])
	{
		cnt += ft_wconvert(str + cnt, wstr[i]);
		i++;
	}
	str[cnt] = '\0';
	return (str);
}