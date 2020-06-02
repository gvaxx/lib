/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:21:09 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/06 14:58:16 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int asc, size_t n)
{
	size_t	i;
	char	*c;

	c = str;
	i = 0;
	while (i != n)
		c[i++] = asc;
	return (str);
}
