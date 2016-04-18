#include "libft.h"

char	*ft_strncpy_wchar(char *dst, size_t n, wchar_t *wstr)
{
	size_t		i;
	size_t		j;
	wchar_t		*wstrdst;

	i = 0;
	j = 0;
	wstrdst = NULL;
	wstrdst = (wchar_t*)malloc(n + 1);
	while (wstr[i] && j < n)
	{
		if (j + ft_size_wchar(wstr[i]) <= n)
		{
			wstrdst[i] = wstr[i];
			j += ft_size_wchar(wstr[i]);
		}
		i++;
	}
	dst = ft_wconvert_str(dst, wstrdst);
	return (dst);
}