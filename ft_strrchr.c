/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 00:52:38 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/03 20:31:07 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*s;
	const char	*l;
	int			flag;

	s = str;
	flag = 0;
	while (*s)
	{
		if (*s == (unsigned char)ch)
		{
			l = s;
			flag = 1;
		}
		s++;
	}
	if (*s == (unsigned char)ch)
		return (char *)(s);
	if (flag)
		return (char *)(l);
	return (0);
}
