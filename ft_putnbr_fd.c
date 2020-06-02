/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:16:33 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/03 20:39:13 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int i;

	i = 1;
	while (n / 10)
	{
		i *= 10;
		n = n / 10;
	}
	return (i);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	i;
	int		dec;

	dec = ft_num_len(n);
	i = n;
	if (i < 0)
	{
		i = -i;
		ft_putchar_fd('-', fd);
	}
	while (dec)
	{
		ft_putchar_fd(i / dec + 48, fd);
		i = i % dec;
		dec = dec / 10;
	}
}
