/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 01:00:47 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/15 17:43:57 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	int				little_sz;

	i = 0;
	if (!*little)
		return (char *)(big);
	if (!len)
		return (NULL);
	little_sz = ft_strlen(little);
	while (big[i] != 0 && i + little_sz - 1 < len)
	{
		if (!(ft_strncmp(&big[i], little, little_sz)))
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
