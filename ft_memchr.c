/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 23:49:29 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/16 21:52:40 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	size_t			size;

	s = (unsigned char *)src;
	size = 0;
	while (size < n)
	{
		if (s[size] == (unsigned char)c)
			return (s + size);
		size++;
	}
	return (0);
}
