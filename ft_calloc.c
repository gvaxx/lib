/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 01:56:28 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/14 11:50:57 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*s;
	size_t	n;

	n = number * size;
	if (number && size)
		if (n / size != number)
			return (0);
	s = malloc(n);
	if (s)
	{
		while (n--)
			s[n] = 0;
		return (void *)(s);
	}
	return (0);
}
