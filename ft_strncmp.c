/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 01:04:15 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/04 18:19:01 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
	const char	*st1;
	const char	*st2;

	st1 = string1;
	st2 = string2;
	if (!num)
		return (0);
	while (*st1 == *st2 && *st1 && *st2 && --num)
	{
		st1++;
		st2++;
	}
	return ((unsigned char)*st1 - (unsigned char)*st2);
}
