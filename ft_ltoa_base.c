/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:03:39 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/19 18:32:57 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num_len(long long n, int base)
{
	int i;

	i = 1;
	if (n < 0)
		i++;
	while (n / base)
	{
		i++;
		n = n / base;
	}
	return (i);
}

char			*ft_ltoa_base(long long n, int base)
{
	size_t			len;
	char		*number;
	long long	i;
	int		c;

	len = ft_num_len(n, base);
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
		c = i % base;
		if (c > 9)
			c += 7; 
		number[len--] = c + 48;
		i = i / base;
	}
	return (number);
}

