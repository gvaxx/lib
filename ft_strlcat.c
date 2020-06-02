/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:42:35 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/06 15:35:42 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int			n;
	const char	*s;
	char		*d;

	n = 0;
	s = src;
	d = dst;
	while (*d && size)
	{
		d++;
		n++;
		size--;
	}
	if (size == 0)
		return (n + ft_strlen(src));
	while (*s && size > 1)
	{
		*d++ = *s++;
		size--;
	}
	*d = '\0';
	while (*s)
		s++;
	return (n + (s - src));
}
