#include "libft.h"

int		ft_wconvert(char *str, wchar_t w)
{
	if (w < 128)
		*(str++) = w;
	else if (w < 2048)
	{
		*(str++) = 0xC0 | ((w >> 6) & 0x3F);
		*(str++) = 0x80 | (w & 0x3F);
	}
	else if (w < 65535)
	{
		*(str++) = 0xE0 | ((w >> 12) & 0xFFF);
		*(str++) = 0x80 | ((w >> 6) & 0x3F);
		*(str++) = 0x80 | (w & 0x3F);
	}
	else if (w < 1114111)
	{
		*(str++) = 0xF0 | ((w >> 18) & 0x3FFFF);
		*(str++) = 0x80 | ((w >> 12) & 0xFFF);
		*(str++) = 0x80 | ((w >> 6) & 0x3F);
		*(str++) = 0x80 | (w & 0x3F);
	}
	return (ft_size_wchar(w));
}