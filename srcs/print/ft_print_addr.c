/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 03:16:04 by nle-bret          #+#    #+#             */
/*   Updated: 2017/03/06 03:16:07 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_addr(void *ptr)
{
	char			*str;
	unsigned long	n;
	char			output[13];
	int				i;

	n = (unsigned long)ptr;
	str = ft_ulltoa_base(n, 16);
	output[0] = '0';
	output[1] = 'x';
	i = 2;
	while (i < 12)
	{
		output[i] = str[i - 2];
		i++;
	}
	output[i] = '\0';
	write(1, output, 12);
}
