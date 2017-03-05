/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 04:26:27 by nle-bret          #+#    #+#             */
/*   Updated: 2017/03/05 04:26:29 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_print_str(unsigned char *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

static void		ft_print_line(unsigned char *ptr, int len)
{
	int		i;
	int		col;

	i = 0;
	col = 40;
	while (i < len)
	{
		ft_printbit(ptr[i]);
		write(1, " ", 1);
		col -= 9;
		i++;
	}
	while (col--)
		write(1, " ", 1);
	ft_print_str(ptr, len);
}

void			ft_bit_dump(const void *addr, size_t size)
{
	unsigned char	*ptr;
	int				nb_line;
	int				nb_byte;
	int				i;

	ptr = (unsigned char*)addr;
	nb_line = size / 4;
	nb_byte = size % 4;
	i = 0;
	while (i < nb_line)
	{
		ft_print_line(ptr, 4);
		ptr += 4;
		i++;
	}
	if (nb_byte)
		ft_print_line(ptr, nb_byte);
}
