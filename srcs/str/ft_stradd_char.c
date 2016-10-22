#include "libft.h"

char	*ft_stradd_char(char **s, char c)
{
    int		len;
    char	*str;

    len = ft_strlen(*s);
    str = (char *)malloc(len + 1 * sizeof(char) + 1);
    ft_strcpy(str, *s);
    ft_strdel(s);
    str[len++] = c;
    str[len] = '\0';
    return (str);
}