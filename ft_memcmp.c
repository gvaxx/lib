/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:56:44 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/08 12:28:27 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *first;
	const unsigned char *second;

	first = s1;
	second = s2;
	if (n == 0)
		return (0);
	while (*first == *second && --n)
	{
		first++;
		second++;
	}
	return (*first - *second);
}
