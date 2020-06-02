/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:03:39 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/06 14:52:40 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num_len(int n)
{
	int i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int			len;
	char		*number;
	long int	i;

	len = ft_num_len(n);
	i = n;
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (0);
	number[len--] = '\0';
	if (n == 0)
		number[0] = '0';
	else
		number[0] = '-';
	if (i < 0)
		i = -i;
	while (i > 0)
	{
		number[len--] = i % 10 + 48;
		i = i / 10;
	}
	return (number);
}
