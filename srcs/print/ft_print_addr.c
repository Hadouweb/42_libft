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

	n = (unsigned long)ptr;
	str = ft_ulltoa_base(n, 16);
	write(1, "0x", 2);
	write(1, str, ft_strlen(str));
}
