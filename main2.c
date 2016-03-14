#include "libft.h"
#include <stdio.h>

static void unittest1(void)
{
	char	testA1[] = "abcdef";
	char	testA2[] = "abcdef";

	ft_memmove(testA1 + 1, testA1, 5);
	//ft_memmove(testA1 + 1, testA1, 0);
	memmove(testA2 + 1, testA2, 5);
	//memmove(testA2 + 1, testA2, 0);
	printf("%s %d %d\n", testA1, strcmp(testA1, "aabcde"), 0);
	printf("%s %d %d\n", testA2, strcmp(testA1, testA2), 0);
}

static void unittest2(void)
{
	char	testB1[] = "abcdef";
	char	testB2[] = "abcdef";

	ft_memmove(testB1, testB1 + 1, 5);
	ft_memmove(testB1, testB1 + 1, 0);
	memmove(testB2, testB2 + 1, 5);
	memmove(testB2, testB2 + 1, 0);
	printf("%d %d\n", strcmp(testB1, "bcdeff"), 0);
	printf("%d %d\n", strcmp(testB1, testB2), 0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		unittest1();
		unittest2();
		//ft_memmove(av[1], av[2], ft_atoi(av[3]));
		if (av[1])
			;
	}
	return (0);
}